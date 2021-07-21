#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+2][m+3],b[n+3][m+4];
		memset(b, 0, sizeof(b));
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++) cin>>a[i][j];
		b[0][0]=a[0][0];
		for(int i=1;i<m;i++) b[0][i]=a[0][i]+b[0][i-1];
		for(int i=1;i<n;i++) b[i][0]=a[i][0]+b[i-1][0];
		for(int i=1;i<n;i++)
			for(int j=1;j<m;j++){
				b[i][j]=min(b[i-1][j-1],min(b[i-1][j],b[i][j-1]))+a[i][j];
				}
		cout<<b[n-1][m-1]<<endl;
	}
}
