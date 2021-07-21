#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('||st.empty()) st.push(s[i]);
			else{
				if(st.top()=='(') st.pop();
				else st.push(s[i]);
			}
		}
		int open =0,close=0;
		while(!st.empty()){
			if(st.top()=='(') open++;
			else close++;
			st.pop();
			}
		int x=open/2+close/2+open%2+close%2;
		cout<<x<<endl;
		}
	}
