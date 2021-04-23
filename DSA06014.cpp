#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[1000000]={0};
vector<ll>vt;
void sangnt()
{
    a[1]=1;a[0]=1;
    for(ll i=2;i<1000000;i++)
    {
        if(a[i]==0)
        {
            vt.push_back(i);
            for(ll j=i*2;j<1000000;j+=i)
                a[j]=1;
        }
    }
}
void xuly(int n)
{
    for(ll i=0;i<sqrt(n);i++)
    {
        if(a[vt[i]]==0 && a[n-vt[i]]==0)
        {
            cout<<vt[i]<<" "<<n-vt[i];
            return;
        }
    }
    cout<<"-1";
}
int main()
{
    sangnt();
    int t;cin>>t;
    while(t--)
    {
        long n;cin>>n;
        xuly(n);
        cout<<endl;
    }
}