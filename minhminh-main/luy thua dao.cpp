#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long luythua(long long a,long long b){
	if(b==0) return 1;
	long long x=luythua(a,b/2);
	if(b%2==0) return x*x%m;
	else return a*(x*x%m)%m;
	}
long long snd(long long n){
	long long snd=0;
	while(n>0){
		snd=snd*10+n%10;
		n/=10;
		}
	return snd;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long x=snd(n);
		cout<<luythua(n,x)<<endl;
			
	}
}

