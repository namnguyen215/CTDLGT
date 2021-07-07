#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left,*right;
};
node *insert(node *t,int x)
{
    if(t==NULL)
    {
        node *tmp=new node;
        tmp->value=x;
        tmp->left=NULL;
        tmp->right=NULL;
        return tmp;
    }
    if(x<t->value)
        t->left=insert(t->left,x);
    else 
        t->right=insert(t->right,x);
    return t;
}
int treelevel(node *t)
{
    if(t==NULL) return -1;
    if(t->left==NULL && t->right==NULL) return 0;
    return 1+max(treelevel(t->left),treelevel(t->right));
}
int main()
{
    int n,x; cin>>n;
    node *t=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        t=insert(t,x);
    }
    cout<<treelevel(t)<<endl;
}