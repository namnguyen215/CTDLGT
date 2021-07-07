#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n,x;
        cin>>n>>x;
        long a[n+1];
        for(long i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==x)
                cout<<i+1<<endl;
        }
    }
}