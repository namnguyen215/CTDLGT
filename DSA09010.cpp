//Kiem tra tinh lien thong manh
// BFS neu co dinh nao chua duyet=> false
//Neu true thif reverse graph va BFS again

#include<bits/stdc++.h>
using namespace std;
int v,e;
bool chuaxet[1007];
vector<int> ke[1007];
vector<int> kervs[1007];
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=1;i<=v;i++)
        ke[i].clear();
}
void BFS(int u,vector<int> vt[])
{
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=0;i<vt[s].size();i++)
        {
            if(chuaxet[vt[s][i]])
            {
                chuaxet[vt[s][i]]=false;
                q.push(vt[s][i]);
            }
        }   
    }
}
bool check(int u)
{   
    BFS(u,ke);
    for(int i=1;i<=v;i++)
        if(chuaxet[v])
            return false;
    return true;
}
string isStrongConnected()
{
    for(int i=1;i<=v;i++)
    {
        memset(chuaxet,true,sizeof(chuaxet));
        if(check(i)==false)
            return "NO";
    }
    return "YES";
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
            // kervs[v2].push_back(v1);
        }
        cout<<isStrongConnected()<<endl;
    }
}