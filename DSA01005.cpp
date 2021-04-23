#include<bits/stdc++.h>
using namespace std;
bool ok=true;
void sinh(int a[],int n)
{
    int i=n-1;
    while(i>0 && a[i]>a[i+1])
        i--;
    if(i==0)
    {
        ok=false;
        return;
    }
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
        cout<<a[i];
    cout<<" ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+7];
        ok=true;
        for(int i=1;i<=n;i++)
            a[i]=i;
        while(ok)
        {
            print(a,n);  
            sinh(a,n);          
        }
        cout<<endl;
    }
}