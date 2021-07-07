#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100001],b[100001],c[100001];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n,m,k;
        cin>>n>>m>>k;
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<m;i++)
            cin>>b[i];
        for(ll i=0;i<k;i++)
            cin>>c[i]; 
        bool ok=false;
        int i=0,j=0,p=0;
        while(i<n && j<m && p<k)
        {
            if(a[i]==b[j] && a[i]==c[p])
            {
                cout<<a[i]<<" ";
                i++;j++;p++;
                ok=true;
            }   
            else if(a[i]<b[j])
                i++;
            else if(b[j]<c[p])
                j++;
            else
                p++;
        }   
        if(ok==false)
            cout<<"-1";  
        cout<<endl;
    }
}