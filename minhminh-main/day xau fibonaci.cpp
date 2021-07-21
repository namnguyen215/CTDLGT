#include<bits/stdc++.h>
using namespace std;
long long  F[100];
/*
A
B
AB
BAB
ABBAB
BABABBAB
*/

char tinh(int n,long long k){
	if(n==1) return'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return tinh(n-2,k);
	return tinh(n-1,k-F[n-2]);
	}

int main(){
	int t;
	cin>>t;
	F[0]=0,F[1]=1;
	for(int i=2;i<=90;i++) F[i]=F[i-2]+F[i-1];
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	
}
}

