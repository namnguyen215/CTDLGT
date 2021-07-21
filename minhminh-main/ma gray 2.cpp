#include<bits/stdc++.h>
using namespace std;

//Gray 2		
			

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string b="";
		b=s[0];
		for(int i=1;i<s.length();i++){
			if(b[i-1]!=s[i]) b+="1";
			else b+="0";
		}
		cout<<b<<endl;
	}
}
