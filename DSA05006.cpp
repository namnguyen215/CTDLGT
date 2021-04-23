#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,sum=0;cin>>n;
        int a[n+7],L[n+7];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            L[i]=a[i];
            for(int j=0;j<i;j++)
            {
                if(a[j]<a[i])
                {
                    L[i]=max(L[j]+a[i],L[i]);
                }
            }
            sum=max(sum,L[i]);
        }
        cout<<sum<<endl;        
    }

}