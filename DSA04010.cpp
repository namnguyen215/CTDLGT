#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,maxx=INT_MIN,sum=0;cin>>n;
        int a[n+2];
        bool ok=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            maxx=max(maxx,sum);
            if(sum<0)
                sum=0;
        }
        cout<<maxx<<endl;
    }
}