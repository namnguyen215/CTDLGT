#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1005];
bool chuaxet[1007];
int truoc[1007];
void DFS(int u,int d)
{
    if(chuaxet[d]==false)
        return;
    chuaxet[u]=false;
    for(int i=0;i<vt[u].size();i++)
    {
        if(chuaxet[vt[u][i]])
        {
            truoc[vt[u][i]]=u;
            DFS(vt[u][i],d);            
        }
    }  
}
void print(int u, int d)
{
    if(chuaxet[d])
        cout<<-1<<endl;
    else
    {
        // for(int i=1;i<=6;i++)
        //     cout<<truoc[i]<<" ";
        vector<int> v1;
        while(d!=u)
        {
            v1.push_back(d);
            d=truoc[d];
        }
        v1.push_back(u);
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
    }
}
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<1005;i++)
        vt[i].clear();
    memset(truoc,0,sizeof(truoc));
}
int main()
{
    int t;cin>>t;
    while(t--)  
    {
        init();
        int v,e,u,d,v1,v2;
        cin>>v>>e>>u>>d;
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            vt[v1].push_back(v2);
            vt[v2].push_back(v1);
        }
        DFS(u,d);
        print(u,d);
    }
}