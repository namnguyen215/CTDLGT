#include<bits/stdc++.h>
using namespace std;
bool dk(long long x,long long y)
{
    return x>y;
}
int main()
{
    int n;cin>>n;
    long long a[n+7];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long b[n+1];
    vector<long long> vt;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            b[i]=a[i];
        else vt.push_back(a[i]);
    }
    sort(vt.begin(),vt.end(),dk);
    int j=0;
    cout<<vt[0]<<vt[1]<<endl;
    for(int i=0;i<n && j<vt.size();i+=2)
    {
        b[i]=vt[j++];
    }
    for(int i=1;i<=n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
}