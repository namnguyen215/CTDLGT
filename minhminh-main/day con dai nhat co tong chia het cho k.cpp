#include<bits/stdc++.h>
using namespace std;
int inf=1e9+7;	
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int a[n+4];
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		a[i]%=k;
	}
	int b[n+8][k];
	for(int i=1;i<k;i++) b[0][i]=-1006;
	b[0][0]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			b[i][j]=max(b[i-1][j],b[i-1][(j-a[i]+k)%k]+1);
		}
	}
	cout<<b[n][0]<<endl;
	
	}
	}
