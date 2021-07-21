#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;

long long luythua(long long a, long long b){
	if(b==0) return 1;
	long long x=luythua(a,b/2);
	if(b%2==0) return x*x%m;
	else return a*(x*x%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<luythua(n,k)<<endl;
	}
}

