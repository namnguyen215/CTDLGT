#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,m,x,maxa=LONG_LONG_MIN,minb=LONG_LONG_MAX;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>maxa)
                maxa=x;
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            if(x<minb)
                minb=x;
        }
        cout<<maxa*minb<<endl;
    }
}