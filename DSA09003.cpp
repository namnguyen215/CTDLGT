#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int v,v1,v2,e;
        cin>>v>>e;
        vector<int> vt[1000];
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            vt[v1].push_back(v2);
        }
        for(int i=1;i<=v;i++)
        {
            cout<<i<<": ";
            for(int j=0;j<vt[i].size();j++)
                cout<<vt[i][j]<<" ";
            cout<<endl;
        }

    }
}