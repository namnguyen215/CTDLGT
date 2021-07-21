#include<bits/stdc++.h>
using namespace std;

int solve(int a,int b, char d){
	if(d=='+') return b+a;
	if(d=='-') return b-a;
	if(d=='*') return b*a;
	if(d=='/') return b/a;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=s.length()-1;i>=0;i--){
			int count=0;
			if(s[i]>='0'&&s[i]<='9') st.push(s[i]-'0');
		
			else{
				int o1=st.top();st.pop();
				int o2=st.top();st.pop();
				int r=solve(o2,o1,s[i]);
				st.push(r);
			}
		}
		cout<<st.top()<<endl;
	}	
	}
