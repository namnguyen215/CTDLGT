#include<bits/stdc++.h>
using namespace std;
 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int m=1e9+7;
		long long max=0;
		for(int i=0;i<n;i++){
			max=(max+a[i]*i%m)%m;
		}
		cout<<max<<endl;
}
}

