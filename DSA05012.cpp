#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m=1e9+7;
ll a[1001][1001];
void init()
{
    for(int i=0;i<=1000;i++)
        for(int j=0;j<=1000;j++)
        {
            if(i==j||j==0)
                a[i][j]=1;
            else a[i][j]=a[i-1][j]+a[i-1][j-1];
            a[i][j]%=m;
        }
}
int main()
{
    init();
    int t;cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        cout<<a[n][k]<<endl;
    }
}