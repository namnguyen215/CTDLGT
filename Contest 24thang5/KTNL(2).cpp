#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void addnode(int u,int v,char x,node **root)
{
    if((*root != NULL) && (*root)->data=u)
    {
        if(X=='L')
            (*root)->left=new node(v);
        else 
            (*root)->right=new node(v);
    }
    else //neu root->data !=u
    {
        if((*root)->right !=NULL)
            addnode(u,v,x,&(*root)->right);
        if((*root)->left!= NULL)
            addnode(u,v,x,&(*root)->left);
    }
}
int check(int level,int levelt,node *root)
{
    level=levelt+1;
    if(!root->left && !root->right)
    {
        if(levelt==-1)
            levelt=level;
        
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,u,v;
        char x;
        cin>>n>>u>>v>>x;
        node root=new node(u);
        addnode(u,v,x,&root);
        for(int i=1;i<n;i++)
        {
            cin>>u>>v>>x;
            addnode(u,v,x,&root);
        }
        int levelt=-1;
        cout<<check(0,levelt,root)<<endl;
        delete(root);
    }
}