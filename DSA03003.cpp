#include<bits/stdc++.h>
using namespace std;
int  m = 1000000007;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,x;cin>>n;
        vector<long long> a;
        for(long long i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(a[i] * i);
            sum%=m;
        }
        cout<<sum<<endl;
    }
}