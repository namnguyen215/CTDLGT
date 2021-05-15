#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,res=0;cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>1)
                res+=a[i]-a[i-1]-1;
        }
        cout<<res<<endl;
    }
}