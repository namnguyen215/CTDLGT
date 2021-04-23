#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[100];
bool ok;
void sinh(int a[],int n, int k)
{
    int i=k;
    if(k>n){
        ok=false;
        return;
    }
    while(i>0 && a[i]==n-k+i)
        i--;
    if(i==0)
    {
        ok=false;
        return;
    }
        
    else 
    {
        a[i]++;
        for(int j=i+1;j<=k;j++)
            a[j]=a[i]+j-i;
    }
}
bool check()
{
    int sum=0;
    for(int i=1;i<=k;i++)
        sum+=a[i];
    if(sum==s)
        return true;
    return false;
}
int main()
{
    while(1)
    {
        cin>>n>>k>>s;
        if(n==0&&k==0&&s==0) break;
        int dem=0;
        for(int i=1;i<=k;i++)
            a[i]=i;
        ok=true;
        while(ok)
        {
            if(check())
                dem++; 
            sinh(a,n,k);
        }
        cout<<dem<<endl;
    }
}