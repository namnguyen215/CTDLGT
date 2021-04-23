#include<bits/stdc++.h>
using namespace std;
void sinh(int a[],int n, int k)
{
    int i=k;
    while(a[i]==a[i-1]+1)
        i--;
    if(i>0)
    {
        a[i]--;
        for(int j=i+1;j<=k;j++)
            a[j]=n-k+j;
    }
        
    else 
    {
        for(int j=1;j<=k;j++)
            a[j]=n-k+j;
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
        int a[k+7]={0};
        for(int i=1;i<=k;i++)
            cin>>a[i];  
        sinh(a,n,k);
        print(a,k);
    }
}