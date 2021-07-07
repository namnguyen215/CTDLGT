#include<bits/stdc++.h>
using namespace std;
struct capso{
    int first, second;
};
bool dk(capso x,capso y)
{
    return x.first<y.first;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        capso a[n+7];
        int dp[n+7];    //so cap so thoa man tinh den dp[i]
        for(int i=1;i<=n;i++)
        {
            cin>>a[i].first>>a[i].second;
            dp[i]=1;
        }
        sort(a+1,a+n+1,dk);
        int res=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<i;j++)
                if(a[j].second<a[i].first)
                    dp[i]=max(dp[i],dp[j]+1);
            res=max(res,dp[i]);
        }
        cout<<res<<endl;
    }
}