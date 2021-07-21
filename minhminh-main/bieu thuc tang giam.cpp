#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		int j=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='D'){
				if(s[i-1]=='I'||i==0) st.push(++j);
				st.push(++j);
			}
			else{
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				if(i==0) cout<<++j;
				if(s[i+1]!='D') cout<<++j;
			}
		}
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}
	
