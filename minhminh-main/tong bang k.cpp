#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
void solve(int a[],int n,int k){
	long long f[k+1];
	f[0]=1;
	for(int i=1;i<=k;i++){
		f[i]=0;
		for(int j=0;j<n;j++){
			if(i-a[j]>=0){
				f[i]+=f[i-a[j]];
				f[i]%=m;
			}
		}
	}
	cout<<f[k]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+4];
		for(int i=0;i<n;i++) cin>>a[i];
		solve(a,n,k);
		
	}
}
