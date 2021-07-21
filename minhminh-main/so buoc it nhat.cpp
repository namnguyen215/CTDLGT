#include<bits/stdc++.h>
using namespace std;
int n,a[1005],dp[1005];
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp[i]=1;
		}
		int res=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>=a[j]) dp[i]=max(dp[i],dp[j]+1);
			}
			res=max(dp[i],res);
		}
		cout<<n-res<<endl;
	}
}
