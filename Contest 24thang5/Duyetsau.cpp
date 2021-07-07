#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;node *right;
    node(int x)
    {
        this->data=x;
        left=right=NULL;
    }
};
void insert(node **root,int x)
{
    if(*root==NULL)
        (*root)=new node(x);
    else{
        if(x<(*root)->data)
            insert(&(*root)->left,x);
        else 
            insert(&(*root)->right,x);
    }
}
void postorder(node *root)
{
    if(root==NULL)
        return;
            postorder(root->left);
            postorder(root->right);
        cout<<root->data<<" ";
    
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        node *root=NULL;
        for(int i=0;i<n;i++)
        {
            int t;cin>>t;
            insert(&root,t);
        }
        postorder(root);
        cout<<endl;
    }
}