#include<bits/stdc++.h>
using namespace std;
long long a[101][50006]; 
int m=1e9+7;
int main(){
	for(int i=0;i<101;i++) a[i][0]=0;
	for(int i=0;i<50001;i++) a[0][i]=0;
	for(int i=1;i<=9;i++) a[1][i]=1;
	for(int i=1;i<101;i++)
		for(int cs=0;cs<=9;cs++)
			for(int j=cs;j<=50000;j++)
				a[i][j]=(a[i][j]+a[i-1][j-cs])%m;
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<a[n][k]<<endl;
	
	}
}

