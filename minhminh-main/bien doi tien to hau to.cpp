#include<bits/stdc++.h>
using namespace std;
bool is_operator(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/') return true;
	return false;
	}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.length()-1;i>=0;i--){
			if(is_operator(s[i]) ){
				string o1= st.top();st.pop();
				string o2=st.top();st.pop();
				string tmp=o1+o2+s[i];
				st.push(tmp);
			}
			else {
				string e="";
				e+=s[i];
				st.push(e);
		} 
		}
		cout<<st.top()<<endl;
		
	}
	}
