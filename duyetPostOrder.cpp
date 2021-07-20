#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left,*right;
};
node *insert(node *&t,int x)
{
    if(t==NULL)
    {
        node *tmp=new node;
        tmp->value=x;
        tmp->right=NULL;
        tmp->left=NULL;
        t=tmp;
    }
    else
    {
        if(x<t->value)
            t->left=insert(t->left,x);
        else
            t->right=insert(t->right,x);   
    }
    return t;
}
void printpostorder(node *t)
{
    if(t!=NULL)
    {
        printpostorder(t->left);
        printpostorder(t->right);
        cout<<t->value<<" ";
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n;
        node *t=NULL;
        for(int  i=0;i<n;i++)
        {
            cin>>x;
            t=insert(t,x);
        }
        printpostorder(t);
    }
}