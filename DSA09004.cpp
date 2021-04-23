#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1005];
bool chuaxet[1007];
void DFS(int u)
{
    chuaxet[u]=false;
    cout<<u<<" ";
    for(int i=0;i<vt[u].size();i++)
    {
        if(chuaxet[vt[u][i]])
        {
            DFS(vt[u][i]);
        }
    }  
}
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<1005;i++)
        vt[i].clear();
}
int main()
{
    int t;cin>>t;
    while(t--)  
    {
        init();
        int v,e,u,v1,v2;
        cin>>v>>e>>u;
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            vt[v1].push_back(v2);
            vt[v2].push_back(v1);
        }
        DFS(u);       
        cout<<endl;
    }
}