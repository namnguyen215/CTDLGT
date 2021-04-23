#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,x;cin>>n;
        vector<ll> vta,vtb;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vta.push_back(x);
        }
        for(int j=0;j<n-1;j++)
        {
            cin>>x;
            vtb.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            if(vta[i]!=vtb[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }       
    }
}