#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> vt[100007];
bool chuaxet[100007];
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<=v;i++)
        vt[i].clear();
}
void readdata()
{
    int v1,v2;
    cin>>v>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>v1>>v2;
        vt[v1].push_back(v2);
        vt[v2].push_back(v1);
    }
}
int bfs(int u)
{
    int tplt=1;
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty())
    {
        int s=q.front(); q.pop();
        for(int i=0;i<vt[s].size();i++)
        {
            if(chuaxet[vt[s][i]])
            {
                tplt++;
                q.push(vt[s][i]);
                chuaxet[vt[s][i]]=false;
            }
        }
    }
    return tplt;
}
int check()
{
    int res=0;
    for(int i=1;i<=v;i++)
    {
        if(chuaxet[i]){
            int x=bfs(i);
            res=max(x,res);
        }
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        readdata();
        cout<<check()<<endl;
    }
}