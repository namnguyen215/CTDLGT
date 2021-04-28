#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1007];
int truoc[1007];
bool chuaxet[1007];
int v,e,v1,v2,start,des;
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
    for(int i=1;i<=v;i++)
        truoc[i]=-1;
    for(int i=1;i<=v;i++)
        ke[i].clear();
}
void BFS(int start,int des)
{
    queue<int> q;
    chuaxet[start]=false;
    q.push(start);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if(chuaxet[ke[s][i]])
            {
                q.push(ke[s][i]);
                chuaxet[ke[s][i]]=false;
                truoc[ke[s][i]]=s;
            }
        }
    }
}
void print(int start,int des)
{
    if(chuaxet[des])
        cout<<-1<<endl ;
    else
    {
        vector<int> vt;
        while(des!=start)
        {
            vt.push_back(des);
            des=truoc[des];
        }
        vt.push_back(start);
        reverse(vt.begin(),vt.end());
        for(int i=0;i<vt.size();i++)
            cout<<vt[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        init();
        cin>>v>>e>>start>>des;
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        BFS(start,des);
        print(start,des);   
    }
}