#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left;
    node *right;
};
node *insert(node *&t,int x)
{
    if(t==NULL)
    {
        node *tmp=new node;
        tmp->value=x;
        tmp->left=NULL;
        tmp->right=NULL;
        return tmp;
    }
    else{
        if(x<t->value)
            t->left=insert(t->left,x);
        else
            t->right=insert(t->right,x);
    }
    return t;
}
void printinorder(node *t)
{
    if(t!=NULL)
    {
        printinorder(t->left);
        cout<<t->value<<" ";
        printinorder(t->right);
    }
}
int main()
{
    int n,x;cin>>n;
    node *t=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t=insert(t,x);
    }
    printinorder(t);
}