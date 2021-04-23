#include<bits/stdc++.h>
using namespace std;
int k;
void sapxep(int a[],int n,int k)
{
    bool ok=true;
    for(int i=0;i<n-1;i++)
    {
        ok=true;
        for(int j=0;j<n-i-1;j++)
        {
            if(abs(k-a[j])>abs(k-a[j+1]))
            {
                swap(a[j],a[j+1]);
                ok=false;
            }
        }
        if(ok)
            return;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sapxep(a,n,k);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}