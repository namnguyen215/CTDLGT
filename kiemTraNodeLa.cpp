#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left,*right;
};
struct data{
    int cha,con;
    char direct;
};
node *newnode(int val)
{
    node *tmp=new node;
    tmp->value=val;
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
            parent=m[a[i].cha];
        }
        node *child;
        child=newnode(a[i].con);
        if(a[i].direct=='L')
            parent->left=child;
        else
            parent->right=child;
        m[a[i].con]=child;
    }
    return t;
}
bool check(node *t,int level,int &leaflevel)
{
    if(t==NULL) return true;
    if(t->left==NULL && t->right==NULL)
    {
        if(leaflevel==0)
            leaflevel=level;    
        return (leaflevel==level);
    }
    return check(t->left,level+1,leaflevel) && check(t->right,level+1,leaflevel);
}
void isSameLevel(node *t)
{
    int level=0,leaflevel=0;
    if(check(t,level,leaflevel))
        cout<<1<<endl;
    else cout<<0<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        data a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i].cha>>a[i].con>>a[i].direct;
        isSameLevel(buildTree(a,n));
    }
}