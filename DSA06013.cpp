#include<bits/stdc++.h>
using namespace std;
int dem(long a[],int n,long k)
{
    int count=0;
    for(int i=0;i<n;i++)
        if(a[i]==k)
            count++;
    if(count) return count;
    return -1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        long k;
        cin>>n>>k;
        long a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<dem(a,n,k)<<endl;
    }
}