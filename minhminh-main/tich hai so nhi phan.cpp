#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long luythua(long long a, long long b){
	if(b==0) return 1;
	long long x=luythua(a,b/2);
	if(b%2==0) return x*x%m;
	return a*(x*x%m)%m;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		long long a=0,b=0;
		for(int i=s1.length()-1;i>=0;i--){
			a+=(s1[i]-'0')*luythua(2,s1.length()-1-i);
		}
		for(int i=s2.length()-1;i>=0;i--){
			b+=(s2[i]-'0')*luythua(2,s2.length()-1-i);
		}
		cout<<a*b<<endl;
	}
}
