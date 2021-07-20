//In ra do dai cay khung
#include<bits/stdc++.h>
using namespace std;
bool chuaxet[10007];
vector<int> ke[1007];
struct dt{
    int ts,I,J;
};
int v,e;
void init()
{
    memset(chuaxet,true,sizeof(chuaxet));
}
bool dk(dt x,dt y)
{
    if(x.ts==y.ts)
    {
        if(x.I==y.I) return x.J<y.J;
        else return x.I<y.I;
    }
    return x.ts<y.ts;
}
void dfs(int u)
{
    chuaxet[u]=false;
    for(int i=0;i<ke[u].size();i++){
        if(chuaxet[ke[u][i]])
            dfs(ke[u][i]);
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int res=0,t=0;
        cin>>v>>e;
        init();
        dt E[e+7];
        for(int i=1;i<=e;i++)
        {
            cin>>E[i].I>>E[i].J>>E[i].ts;
        }
        sort(E+1,E+e+1,dk);
        for(int i=1;i<=e;i++)
            ke[i].clear();
        for(int i=1;i<=e;i++)
        {
            int a=E[i].I,b=E[i].J;
            init();
            dfs(a);
            if(chuaxet[b])
            {
                res+=E[i].ts;
                t++;
                ke[a].push_back(b);
                ke[b].push_back(a);
            }
            if(t==v-1)  break;
        }
        cout<<res<<endl;
    }
}
