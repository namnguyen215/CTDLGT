#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left;
    node *right;
};
struct data{
    int cha,con;
    char lr;
};
//tao node moi
node *newnode(int val)
{
	node *tmp=new node;
	tmp->value=val;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
//xay dung cay tu de bai
node *buildtree(data *a,int n)
{
	node *tree=NULL;
	map<int,node*> m;
	for(int i=1;i<=n;i++)
	{
		node *parent;
		if(m.find(a[i].cha)==m.end())	//Ko tim thay trong map
		{
			parent=newnode(a[i].cha);	//tao node cha
			m[a[i].cha]=parent;			//a[i].cha co value=parent
			if(tree==NULL)
				tree=parent;
		}
		else{  							//Da ton tai a[i].cha
			parent=m[a[i].cha];
		}
		//sau khi da xac dinh duoc node cha thi them node con
		node *child=newnode(a[i].con);
		if(a[i].lr=='L')	parent->left=child;
		else parent->right=child;
		m[a[i].con]=child;
	}
	return tree;
}
//Kiem tra muc cua node
bool check(node *root,int level, int &leaflevel)
{
	if(root==NULL)	return true;
	if(root->left==NULL && root->right==NULL)	//La node la
	{
		if(leaflevel==0)
		{
			leaflevel=level;
			return true;
		}
		return (leaflevel==level);
	}
	return check(root->left,level+1,leaflevel)&&check(root->right,level+1,leaflevel);
}
//In ra kq
void xuly(node *root)
{
	int level=0,leaflevel=0;
	if(check(root,level,leaflevel)==true)	cout<<1<<endl;
	else cout<<0<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        data a[n+7];
        for(int i=1;i<=n;i++)
            cin>>a[i].cha>>a[i].con>>a[i].lr;
        xuly(buildtree(a,n));
    }
}