#include<bits/stdc++.h>
using namespace std;
int op(char c){
	if(c == '(') return 1;
	if(c=='*'||c=='/') return 3;
	else if(c=='+'||c=='-') return 2;
	else return 4;
}
void in_to_post(string s){
	stack<char> st;
	
	for(int i=0;i<s.length();i++){
	
		if(s[i]>='A'&&s[i]<='Z'|| (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) cout<<s[i];
		else if(s[i]=='(') st.push(s[i]);
		else if(s[i]==')'){
			while(!st.empty()&&st.top()!='('){
			    cout<<st.top();
				st.pop();
			
			}
			st.pop();
		}
		else {
			while(!st.empty()&&op(s[i])<=op(st.top())){
				cout<<st.top();
				st.pop();
			
			}
			st.push(s[i]);
		}
}
	while(!st.empty()&&st.top()!='('){
			cout<<st.top();
				st.pop();
			
	}

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
    	string a;
    	cin>>a;
    	in_to_post(a);
    	cout<<endl;
    }
   
}
