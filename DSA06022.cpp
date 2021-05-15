#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int min1=a[0],min2=-1;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>min1){
                min2=a[i];
                break;
            }
                
        }
        if(min2>0)
            cout<<min1<<" "<<min2<<endl;
        else cout<<-1<<endl;
    }
}