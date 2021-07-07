#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int F[n+1][m+1]={0};
        F[0][0]=a[0][0];
        for(int i=1;i<m;i++)
            F[0][i]=F[0][i-1]+a[0][i];
        for(int i=1;i<n;i++)
            F[i][0]=F[i-1][0]+a[i][0];
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
                F[i][j]=min(F[i-1][j-1],min(F[i-1][j],F[i][j-1]))+a[i][j];
        cout<<F[n-1][m-1]<<endl;
    }
}