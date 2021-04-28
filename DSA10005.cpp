#include<bits/stdc++.h>
using namespace std;
int check(int v,int ra[],int vao[])
{
    for(int i=1;i<=v;i++)
    {
        if(ra[i]!=vao[i])
            return 0;
    }
    return 1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int v1,v2,v,e;
        cin>>v>>e;
        int ra[v+7]={0},vao[v+7]={0};
        for(int i=0;i<e;i++)
        {
            cin>>v1>>v2;
            ra[v1]++;
            vao[v2]++;
        }
        cout<<check(v,ra,vao)<<endl;
    }    
}