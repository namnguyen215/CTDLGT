#include<bits/stdc++.h>
using namespace std;
int v,e,s;
int truoc[10007];
void dijkstra(int **a,int s)
{
    bool daxet[v]={};
    int d[v];
    int t=v-1;
    daxet[s]=true;
    for(int i=0;i<v;i++)
    {
        truoc[i]=s;
        d[i]=a[s][i];
    }
    while(t)
    {
        int mind=INT_MAX;
        int u=0;
        for(int i=0;i<v;i++)
        {
            if(daxet[i]==false && mind>d[i])
            {
                mind=d[i];
                u=i;
            }
        }
        daxet[u]=true;
        t--;
        for(int i=0;i<v;i++)
        {
            if(d[i]>d[u]+a[u][i])
            {
                d[i]=d[u]+a[u][i];
                truoc[i]=u;
            }
        }
    }
    for(int i=0;i<v;i++)
        cout<<d[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        
        cin>>v>>e>>s;
        int v1,v2,ts;
        int **a =new int*[v];
        for(int i=0;i<v;i++)
        {
            a[i]=new int[v];
            for(int j=0;j<v;j++)
                if(i==j)    a[i][j]=0;
                else a[i][j]=SHRT_MAX;
        }
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2>>ts;
            if(a[v1-1][v2-1]>ts){
                a[v1-1][v2-1]=ts;
                a[v2-1][v1-1]=ts;                
            }

        }
        dijkstra(a,s-1);
    }
}