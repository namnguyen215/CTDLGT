#include<bits/stdc++.h>
using namespace std;
int dd[1000007]={0};
int main()
{
    int t;cin>>t;
    while(t--)
    {
        memset(dd,0,sizeof(dd));
        int n,x;cin>>n>>x;
        long a[n+7];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            dd[a[i]]++;
        }
        if(dd[x]==0)
            cout<<-1;
        else cout<<dd[x];
        cout<<endl;
    }
}