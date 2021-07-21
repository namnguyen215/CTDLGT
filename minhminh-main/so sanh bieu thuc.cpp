#include<bits/stdc++.h>
using namespace std;
void change(string s,vector<char>& v){
	
	stack<int> st;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(i);
			else if(s[i]==')'&&!st.empty()){
				int top=st.top();
				st.pop();
				if(top==0) continue;
				else if(s[top-1]=='+') continue;
				else if(s[top-1]=='-'){
					for(int j=top;j<=i;j++){
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
					}
				}
			}
		}
	
	for(int i=0;i<s.length();i++){
		if(s[i]!='('&&s[i]!=')') v.push_back(s[i]);
	}
}		
int main()
{
    int t;
	cin>>t;
    while(t--)
    {
    	string s1,s2;
    	cin>>s1>>s2;
    	vector<char> v1,v2;
		v1.clear();
		v2.clear();
		change(s1,v1);
		change(s2,v2);
		/*for(int i=0;i<v1.size();i++)
			cout <<v1[i];
		cout<<endl;
		for(int i=0;i<v2.size();i++)
			cout <<v2[i];*/
		if(v1.size()==v2.size()){
			int d=0;
			for(int i=0;i<v1.size();i++) if(v1[i]!=v2[i]){
				d++;
				cout<<"NO"<<endl;
				break;
			}
			if(d==0) cout<<"YES"<<endl;
		
		}
		else cout<<"NO"<<endl;
	
    }
}
