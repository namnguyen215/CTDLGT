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
void treeBFS(int u)
{
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int s=q.front();q.pop();
        for(int i=0;i<vt[s].size();i++)
        {
            if(chuaxet[vt[s][i]])
            {
                chuaxet[vt[s][i]]=false;
                q.push(vt[s][i]);
                k++;
                st[k]=s;
                en[k]=vt[s][i];
            }
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
        treeBFS(u);
        check();
    }
}