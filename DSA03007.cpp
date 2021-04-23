#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool dk(ll x,ll y)
{
    return x>y;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++)
            cin>>b[i];
        sort(b.begin(),b.end(),dk);
        ll res=0;
        for(ll i=0;i<n;i++)
            res+=a[i]*b[i];
        cout<<res<<endl;
    }
    
}