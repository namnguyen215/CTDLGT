#include<bits/stdc++.h>
using namespace std;
long long  F[100];
int m=1e9+7;

int main(){
	int t;
	cin>>t;
	F[0]=0,F[1]=1;
	for(int i=2;i<=90;i++) F[i]=F[i-2]+F[i-1];
	while(t--){
		int n;
		cin>>n;
		cout<<F[n]%m<<endl;
	
}
}

