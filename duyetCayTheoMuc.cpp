#include<bits/stdc++.h>
using namespace std;
struct node{
    int value,level=0;
    node *left,*right;

};
struct data{
    int cha,con;
    char lr;
};
node *newnode(int x)
{
    node *tmp=new node;
    tmp->value=x;
    tmp->level=0;
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
        node *child=newnode(a[i].con);
        if(a[i].lr=='L')
            parent->left=child;
        else 
            parent->right=child;
        m[a[i].con]=child;
        child->level=parent->level+1;
    }
    return t;
    
}
void in(node *t)
{
    queue<node*> q;
    q.push(t);
    while(!q.empty())
    {
        node *tmp=q.front();
        q.pop();
        cout<<tmp->value<<" ";
        if(tmp->left!=NULL)
            q.push(tmp->left);
        if(tmp->right!=NULL)
            q.push(tmp->right);
    }

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        data a[n+7];
        for(int i=0;i<n;i++)
            cin>>a[i].cha>>a[i].con>>a[i].lr;
        in(buildTree(a,n));
        cout<<endl;
    }
}