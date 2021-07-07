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
void addnode(int u,int v,char x, node **root)
{
    if((*root)!=NULL && (*root)->data==u)
    {
        if(x=='L')
            (*root)->left=new node(v);
        else
            (*root)->right=new node(v);
    }
    else{
        if((*root)->right != NULL)
            addnode(u,v,x,&(*root)->right);
        if((*root)->left != NULL)
            addnode(u,v,x,&(*root)->left);
    }
}
bool checkUtil(node *root,
            int level, int *leafLevel)
{
    if (root == NULL) return true;
    if (root->left == NULL &&
        root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level; 
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level + 1, leafLevel) &&
            checkUtil(root->right, level + 1, leafLevel);
}
bool check(node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,u,v;
        char x;
        cin>>n>>u>>v>>x;
        node *root=new node(u);
        addnode(u,v,x,&root);
        for(int i=1;i<n;i++)
        {
            cin>>u>>v>>x;
            addnode(u,v,x,&root);
        }
        int l=-1;
        cout<<check(root)<<endl;
        delete root;
    }
}