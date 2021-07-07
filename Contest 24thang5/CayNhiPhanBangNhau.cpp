#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data x;
        left=NULL;
        right=NULL;
    }
};
struct point{
    int u;
    int v;
    char x;
}
int main()
{
    int t;cin>>t;
    for(int x=0;x<t;x++)
    {
        int n,m;cin>>n;
        point point1[n]={};
        node *root1=NULL, *root2=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>point1[i].u>>point1[i].v>>point1[v].x;
        }
    }
}