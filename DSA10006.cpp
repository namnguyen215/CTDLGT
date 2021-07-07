#include<bits/stdc++.h>
using namespace std;
int v,e,u,k;
bool chuaxet[1007];
vector<int> vt[1007];
int st[1007],en[1007];
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=1;i<=v;i++)
            vt[i].clear();
    k=0;
}
void treeDFS(int u)
{
    chuaxet[u]=false;
    for(int i=0;i<vt[u].size();i++)
    {
        if(chuaxet[vt[u][i]])
        {
            k++;
            st[k]=u;
            en[k]=vt[u][i];
            treeDFS(vt[u][i]);
        }
    }
}
void check()
{
    if(k==v-1)
    {
        for(int i=1;i<=k;i++)
            cout<<st[i]<<" "<<en[i]<<endl;
    }
    else 
        cout<<-1<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>v>>e>>u;
        int v1,v2;
        init();
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2;
            vt[v1].push_back(v2);
            vt[v2].push_back(v1);
        }
        treeDFS(u);
        check();
    }
}