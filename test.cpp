//so luong hon dao
#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
bool chuaxet[1005];
void init()
{
    memset(chuaxet, true, sizeof(chuaxet));
}
void BFS(int u,int m)
{
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=1;i<=m;i++)
        {
            if(chuaxet[i] && a[s][i]==1)
            {
                chuaxet[i]=false;
                q.push(i);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        int n,m;
        cin >> n >> m;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                cin>>a[i][j];
        int tplt=0;
        for(int i=1;i<=n;i++)
        {
            if(chuaxet[i]){
                BFS(i,m);
                tplt++;
            }
        }
        cout<<tplt<<endl;
    }
}