#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
bool dk(long x,long y)
{
    return x<y;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n,x;cin>>n;
        vector<long> vt;
        for(long i=0;i<n;i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        sort(vt.begin(),vt.end(),dk);
        long long res=0;
        for(int i=0;i<n;i++)
        {
            res=res+(vt[i]%m)*i%m;
            res=res%m;
        }
        cout<<res<<endl;
    }
}