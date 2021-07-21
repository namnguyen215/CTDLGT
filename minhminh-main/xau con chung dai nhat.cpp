#include<bits/stdc++.h>
using namespace std;
int f[1001][1001];

void maxlen(string s1,string s2){
	for(int i=0;i<s1.length();i++)
		for(int j=0;j<s2.length();j++){
	        if(s1[i]==s2[j]) f[i+1][j+1]=f[i][j]+1;
			else f[i+1][j+1]= max(f[i+1][j],f[i][j+1]);
	}
}	
int main(){
       int t;
       cin>>t;
       while(t--){
       	string s1,s2;
       	cin>>s1>>s2;
       	for(int i=0;i<=1000;i++)
       		for(int j=0;j<=1000;j++)
       			f[i][j]=0;
       	
       	maxlen(s1,s2);
       	cout<<f[s1.length()][s2.length()]<<endl;
       		 
	}
}
