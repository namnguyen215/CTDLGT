#include<bits/stdc++.h>
using namespace std;
int n,a[1005],dp[1005];
int main(){

		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp[i]=1;//khoi ta moi phan tu co do dai =1
		}
		int res=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+1);//kiem tra do dai tai vi tri i
			}
			res=max(dp[i],res);// tìm do dai lon nhat o cac vi tri i
		}
		cout<<res<<endl;
	
}
