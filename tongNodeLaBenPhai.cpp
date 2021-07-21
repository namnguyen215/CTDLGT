#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left,*right;
};
struct data{
    int cha,con;
    char lr;
};
long sum=0;
node *newnode(int x)
{
    node *tmp=new node;
    tmp->value=x;
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}
node *buildTree(data a[],int n)
{
    node *t=NULL;
    map<int,node*> m;
    for(int i=0;i<n;i++)
    {
        node *parent;
        if(m.find(a[i].cha)==m.end())
        {
            parent=newnode(a[i].cha);
            m[a[i].cha]=parent;
            if(t==NULL)
                t=parent;
        }
        else{
            m[a[i].cha]=parent;
        }
        
        node *child=newnode(a[i].con);
        if(a[i].lr=='L')
            parent->left=child;
        else
            parent->right=child;
        m[a[i].con]=child;
    }
    return t;
}
long tongNodePhai(node *t)
{
    if(t->left==NULL && t->right==NULL)
        sum+=t->value;
    tongNodePhai(t->left);
    tongNodePhai(t->right);
    return sum;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        sum=0;
        int n;cin>>n;
        data a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i].cha>>a[i].con>>a[i].lr;
        cout<<tongNodePhai(buildTree(a,n))<<endl;
    }
}