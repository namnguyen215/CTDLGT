#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==x)
                    count++;
            }
        }
        cout<<count<<endl;
    }
}