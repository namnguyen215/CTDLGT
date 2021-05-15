#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
int main()
{
    int t;cin>>t;
    while(t--)

    {
        int n,k;
        cin>>n>>k;
        int a[n+7]={0};
        a[0]=a[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=k;j++){
                if(i>=j) 
                    a[i]=(a[i]+a[i-j])%m;
            }
        }
        // for(int i=0;i<=n;i++)   
        //     cout<<i<<": "<<a[i]<<endl;
        cout<<a[n]<<endl;
    }
}