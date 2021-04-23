#include<bits/stdc++.h>
using namespace std;

void sinh(int a[],int n, int k)
{
    int i=k;
    while(i>0 && a[i]==n-k+i)
        i--;
    if(i==0)
        for(int i=1;i<=k;i++)
            a[i]=i;
    else 
    {
        a[i]++;
        for(int j=i+1;j<=k;j++)
            a[j]=a[i]+j-i;
    }
}
void print(int a[],int k)
{
    for(int i=1;i<=k;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k+7];
        for(int i=1;i<=k;i++)
            cin>>a[i];
        sinh(a,n,k);
        print(a,k);
    }
}