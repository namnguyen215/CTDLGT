#include<bits/stdc++.h>
using namespace std;
 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		long long s=0;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			s+=a[i];
		}
		sort(a,a+n);
		int m=min(k,n-k);
		long long s1=0;
		for(int i=0;i<m;i++) s1+=a[i];
		cout<<(s-s1)-s1<<endl;
	
}
}
