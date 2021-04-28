#include<bits/stdc++.h>
using namespace std;
int v,e,s;
int chuaxet[1007];
vector<int> ke[1007];
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=1;i<=v;i++)
        ke[i].clear();
}
void BFS(int start)
{
    queue<int> q;
    chuaxet[start]=false;
    q.push(start);
    while(!q.empty())
    {
        int s=q.front();
        cout<<s<<" ";
        q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if(chuaxet[ke[s][i]])
            {
                q.push(ke[s][i]);
                chuaxet[ke[s][i]]=false;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        int v1,v2;
        cin>>v>>e>>s;
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        BFS(s);
    }
}