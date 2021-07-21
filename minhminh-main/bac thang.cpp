#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1]={0};
		a[0]=1;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=k;j++)
				if(i>=j) {
					a[i]+=a[i-j];
					a[i]=a[i]%m;
			}
		cout<<a[n]<<endl;
		}
	}
