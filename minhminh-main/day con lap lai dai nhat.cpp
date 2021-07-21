#include<bits/stdc++.h>
using namespace std;
int f[101][101]={0};

void solve(string s1){
	
	for(int i=0;i<s1.length();i++)
		for(int j=0;j<s1.length();j++){
	        if(s1[i]==s1[j]&&i!=j) f[i+1][j+1]=f[i][j]+1;
			else f[i+1][j+1]= max(f[i+1][j],f[i][j+1]);
	}
}	
int main(){
       int t;
       cin>>t;
       while(t--){
       	int n;
       	string s1;
       	cin>>n>>s1;
       	solve(s1);
       	cout<<f[s1.length()][s1.length()]<<endl;
       		 
	}
}
