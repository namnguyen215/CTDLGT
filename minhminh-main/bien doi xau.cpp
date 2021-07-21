#include<bits/stdc++.h>
using namespace std;
int f[1001][1001];
int minn(int a,int b,int c){
	int t=min(a,b);
	return min(t,c);
}
void min_step(string s1,string s2){
	for(int i=0;i<s1.length();i++)
		for(int j=0;j<s2.length();j++){
	        if(s1[i]==s2[j]) f[i+1][j+1]=f[i][j];
			else f[i+1][j+1]= minn(f[i+1][j],f[i][j+1],f[i][j])+1;
	}
}	
int main(){
       int t;
       cin>>t;
       while(t--){
       	string s1,s2;
       	cin>>s1>>s2;
       	for(int i=0;i<=1000;i++)
       			f[i][0]=i;
       	for(int j=0;j<=1000;j++) f[0][j]=j;
       	
       	min_step(s1,s2);
       	cout<<f[s1.length()][s2.length()]<<endl;
       		 
	}
}
