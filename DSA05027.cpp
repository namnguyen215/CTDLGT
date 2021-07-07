#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,W;
        cin>>n>>W;
        int v[n+7],w[n+7];
        v[0]=0;w[0]=0;
        for(int i=1;i<=n;i++)
            cin>>w[i];
        for(int i=1;i<=n;i++)
            cin>>v[i];
        int maxv[n+1][W+1]; //maxv[i][j] trong luong lon nhat co the chon tu i do vat mang di dc khi trong luong tui la j
        for(int i=0;i<=n;i++)
            maxv[i][0]=0;
        for(int j=0;j<=W;j++)
            maxv[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                maxv[i][j]=maxv[i-1][j];
                if(j>=w[i] && (maxv[i-1][j-w[i]]+v[i] > maxv[i-1][j]))
                    maxv[i][j]=maxv[i-1][j-w[i]]+v[i];
            }
        }
        cout<<maxv[n][W]<<endl;
    }
}