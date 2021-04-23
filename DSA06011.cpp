#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long min=INT_MAX,value;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long x=abs(a[i]+a[j]);
                if(x<min)
                {
                    min=x;
                    value=a[i]+a[j];
                }
                    
            }
        }
        cout<<value<<endl;
    }
}