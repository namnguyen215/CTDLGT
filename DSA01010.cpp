#include<bits/stdc++.h>
using namespace std;
bool last=false;
void sinh(int a[],int n, int k)
{
    int i=k;
    while(i>0 && a[i]==n-k+i)
        i--;
    if(i==0)
        last=true;
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
        last=false;
        int n,k;
        cin>>n>>k;
        int a[k+7];
        for(int i=1;i<=k;i++)
            cin>>a[i];
        int cmp[k+7];
        for(int i=1;i<=k;i++)
            cmp[i]=a[i];
        sinh(a,n,k);
        int count=0;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=k;j++)
                if(cmp[i]==a[j])
                    count++;
        }
        if(last)
            cout<<k<<endl;
        else
            cout<<k-count<<endl;
    }
}