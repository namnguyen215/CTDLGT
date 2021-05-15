#include<bits/stdc++.h>
using namespace std;

int BFS(int u,vector<int> *ke,bool *chuaxet)
{
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    int dem=1;
    while(!q.empty())
    {

        int s=q.front();
        q.pop();
        for(int i=0;i<ke[s].size();i++)
        {
            if(chuaxet[ke[s][i]])
            {
                dem++;
                chuaxet[ke[s][i]]=false;
                q.push(ke[s][i]);
            }
        }   
    }
    return dem;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int v1,v2,v,e;
        cin>>v>>e;
        bool chuaxet[v+1];
        memset(chuaxet,true,sizeof(chuaxet));
        vector<int> ke[v+1];
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            ke[v1].push_back(v2);
            ke[v2].push_back(v1);
        }
        int maxx=0;
        for(int u=1;u<=v;u++)
        {
            if(chuaxet[u])
            {
                int x=BFS(u,ke,chuaxet);
                if(x>maxx)
                    maxx=x;
            }
        }
        cout<<maxx<<endl;
    }
}