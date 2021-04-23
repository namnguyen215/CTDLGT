#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m=1e9+7;
long long amub(ll a, ll b){	
	if(b==1)
		return a;
	ll x=amub(a,b/2);
	if(b%2==0){
		return x%m * x%m;
	}		
	else{
		return  x%m * x%m * a%m;
	}	
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<amub(a,b)<<endl;
	}
}