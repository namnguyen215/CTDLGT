#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=1e9+7;
ll mu(ll n, ll k)
{
    if(k==1)    return n%mod;
    ll x=mu(n,k/2);
    if(k%2==0)
        return (x*x%mod);
    else
        return (x*x%mod)*n%mod;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll m=n,k=0;
        while(m)
        {
            k=k*10+m%10;
            m=m/10;
        }
        cout<<mu(n,k)<<endl;
    }
}