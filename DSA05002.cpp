#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s; cin.ignore();
        cin>>s;
        int res[n+7][n+7];
        memset(res,0,sizeof(res));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==s[j-1] && i!=j)
                    res[i][j]=res[i-1][j-1]+1;
                else 
                    res[i][j]=max(res[i-1][j],res[i][j-1]);
            }
        cout<<res[n][n]<<endl;
    }
}