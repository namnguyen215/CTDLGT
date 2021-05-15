#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> ke[1007];
bool chuaxet[1007];
void init()
{
    for(int i=1;i<=v;i++)
        ke[i].clear();
    memset(chuaxet,true,sizeof(chuaxet));
}
void bfs(int u)
{
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int s=q.front();q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if(chuaxet[ke[s][i]])
            {
                q.push(ke[s][i]);
                chuaxet[ke[s][i]]=false;
            }
        }
    }
}
bool dinhtru(int u)
{
    memset(chuaxet,true,sizeof(chuaxet));
    chuaxet[u]=false;
    if(u==1)
        bfs(2);
    else 
        bfs(1);
    for(int i=1;i<=v;i++)
        if(chuaxet[i]==true)
            return true;
    return false;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        int v1,v2;
        cin>>v>>e;
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        for(int i=1;i<=v;i++)
        {
            if(dinhtru(i))
                cout<<i<<" ";
            
        }
        cout<<endl;
    }
}