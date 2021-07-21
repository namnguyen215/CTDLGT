#include<bits/stdc++.h>
using namespace std;
// tim phan tu max nho hon x trong mang
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long a[n+5];
		int vt=-1;
		for(long long i=1;i<=n;i++) cin>>a[i];
		for(long long i=1;i<=n;i++){
			if(a[i]<=x) vt=i;
		}
		cout<<vt<<endl;
			
	}
}

