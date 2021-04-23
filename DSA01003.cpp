#include<bits/stdc++.h>
using namespace std;
void sinh(int a[],int n)
{
    int i=n-1;
    while(i>0 && a[i]>a[i+1])
        i--;
    if(i==0)
        for(int i=1;i<=n;i++)
            a[i]=i;
    else 
    {
        int k=n;
        while(a[k]<a[i]) k--;
        swap(a[k],a[i]);
        sort(a+i+1,a+n+1);
    }
}
void print(int a[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+7];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sinh(a,n);
        print(a,n);
    }
}