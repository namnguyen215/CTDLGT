#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<long long> vt;
        long long x,m,n;
        cin>>m>>n;
        for(long long i=0;i<m+n;i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        sort(vt.begin(),vt.end());
        for(long long i=0;i<m+n;i++)
            cout<<vt[i]<<" ";
        cout<<endl;
    }
}