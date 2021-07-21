#include<bits/stdc++.h>
using namespace std;
//so day =2^(n-1)
int m=123456789;
long long solve(long long n){
	if(n==0) return 1%m;
	long long t=solve(n/2);
	if(n%2==0) return t*t%m;
	return 2*(t*t%m)%m;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<solve(n-1)<<endl;
			
	}
}

