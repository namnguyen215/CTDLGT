#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1000];
vector<int> ke[1007];
int v,e,v1,v2;
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=0;i<=v;i++)
    {
        ke[i].clear();
    }
}
bool check()
{
    for(int i=1;i<=v;i++)
        if(chuaxet[i]==true)
            return false;
    return true;
}
void bfs(int u,int e1,int e2)
{
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if((s==e1 && ke[s][i]==e2) || (s==e2 && ke[s][i]==e1))
                continue;
            if(chuaxet[ke[s][i]])
            {
                chuaxet[ke[s][i]]=false;
                q.push(ke[s][i]);
            }
        }
    }
}
bool canhcau(int e1,int e2)
{
    memset(chuaxet,true,sizeof(chuaxet));
    bfs(1,e1,e2);
    if(check()) 
        return false;
    return true; 
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        cin>>v>>e;
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        for(int i=1;i<=v;i++)
        {
            for(int j=0;j<ke[i].size();j++)
            {
                if(i<ke[i][j] && canhcau(i,ke[i][j]))
                    cout<<i<<" "<<ke[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}