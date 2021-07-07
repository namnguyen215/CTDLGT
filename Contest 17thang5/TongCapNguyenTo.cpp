#include<bits/stdc++.h>
using namespace std;
int dem(int x,int y[],int n,int a[])
{
    if(x==0)    return 0;
    if(x==1)    return a[0];
    int* cs=upper_bound(y,y+n,x);
    int res=(y+n)-cs;
    res+=(a[0]+a[1]);
    if(x==2)
        res-=(a[3]+a[4]);
    if(x==3)
        res+=a[2];
    return res;
}
int demcap(int x[],int y[],int m,int n)
{
    int a[5]={0};
    for(int i=0;i<n;i++)
        if(y[i]<5)
            a[y[i]]++;
    sort(y,y+n);
    int res=0;
    for(int i=0;i<m;i++)
        res+=dem(x[i],y,n,a);
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int x[m],y[n];
        for(int i=0;i<m;i++)
            cin>>x[i];
        for(int i=0;i<n;i++)
            cin>>y[i];
        cout<<demcap(x,y,m,n)<<endl;
    }
}