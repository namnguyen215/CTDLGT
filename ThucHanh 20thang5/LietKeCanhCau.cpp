#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> vt[1007];
bool chuaxet[1007];
int truoc[1007];
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
bool bfs(int u)
{
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
                q.push(vt[s][i]);
                chuaxet[vt[s][i]]=false;
                truoc[vt[s][i]]=s;
            }
            else if(truoc[s]!=vt[s][i])
                return true;
        }
    }
    return false;
}
string check()
{
    for(int i=1;i<=v;i++)
        if(chuaxet[i] && bfs(i))
            return "YES";
    return "NO";
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