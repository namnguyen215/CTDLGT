#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+7],b[n+7]={0}; //b[] 
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int res=0;
    for(int i=1;i<=n;i++)
    {
        b[a[i]]=b[a[i]-1]+1;
        res=max(res,b[a[i]]);
    }
    cout<<n-res<<endl;
}