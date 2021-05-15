#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,x,res=-1;cin>>n>>x;
        ll a[n+1];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==x)
                res=1;
        }
        cout<<res<<endl;
    }
}