#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dem(ll n)
{
    queue<ll> q;
    q.push(1);
    ll t;int cnt=0;
    while(!q.empty())
    {   
        t=q.front();
        q.pop();
        if(t<=n)
        {
            cnt++;
            q.push(t*10);
            q.push(t*10+1);
        }
    }
    return cnt;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        cout<<dem(n)<<endl;
    }
}