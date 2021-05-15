#include<bits/stdc++.h>
using namespace std;
int v,e;
bool chuaxet[1007];
vector<int> ke[1007];
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=1;i<=v;i++)
        ke[i].clear();
}
void BFS(int u)
{
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if(chuaxet[ke[s][i]])
            {
                chuaxet[ke[s][i]]=false;
                q.push(ke[s][i]);
            }
        }   
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        int v1,v2,TPLT=0;
        cin>>v>>e;
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        for(int u=1;u<=v;u++)
        {
            if(chuaxet[u])
            {
                TPLT++;
                BFS(u);
            }
        }
        cout<<TPLT<<endl;
    }
}