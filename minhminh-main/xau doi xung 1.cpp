#include<bits/stdc++.h>
using namespace std;
int f[1002][1002];


void min_step(string s){ 
	for(int i=0;i<=s.length();i++) 
			for(int j=0;j<=s.length();j++)
			f[i][j]=0;
	
	int c=0;
	for(int i=1;i<=s.length();i++){
		for(int j=1;j<=s.length();j++){
			if(s[i-1]==s[s.length()-j]) f[i][j]=f[i-1][j-1]+1;
			else f[i][j]=max(f[i-1][j],f[i][j-1]);
			c=max(c,f[i][j]);
	}
	


}

cout<<s.length()-c<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		min_step(s);
	}
}
