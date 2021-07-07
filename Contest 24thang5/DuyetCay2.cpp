#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x)
    {
        this->data=x;
        left=right=NULL;
    }
};
int search(int *a,int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
            return i;
    }
    return -1;
}
void addNode(int n,int *ino,int *lev,node **root)
{
    (*root)=new node(lev[0]);
    int key=search(ino,n,lev[0]);
    int llev[key],rlev[n-1-key],x=0,y=0;
    for(int i=1;i<n;i++)
    {
        if(search(ino,n,lev[i])>key)
            rlev[x++]=lev[i];
        else llev[y++]=lev[i];
    }
    if(key>0) addNode(key,ino,llev,&(*root)->left);
    if(n-1-key>0) addNode(n-1-key,ino+key+1,rlev,&(*root)->right);  
}
void postorder(node *root)
{
    if(root !=NULL){
        if(root->left!=NULL)
            postorder(root->left);
        if(root->right!=NULL)
            postorder(root->right);
        cout<<root->data<<" ";
    }    
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int  ino[n],lev[n];
        for(int i=0;i<n;i++)
        {
            cin>>ino[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>lev[i];
        }
        node *root=NULL;
        addNode(n,ino,lev,&root);
        postorder(root);
        cout<<endl;
    }
}