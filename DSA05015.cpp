//Tinh P(n,k);
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
        if(k>=n)
            cout<<0<<endl;
        else{
            long long res=1;
            for(int i=n-k+1;i<=n;i++)
                res=(res*i)%m;
            cout<<res<<endl;
        }
    }
}