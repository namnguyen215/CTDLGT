#include<bits/stdc++.h>
using namespace std;
//tao node
struct node{
	int value;
	node*left;
	node*right;
};
//tao node co gia tri roi rac
struct data{
	int cha,con;
	char lr;
};
node* newnode(int vl){
	node*tmp=new node;
	tmp->left=tmp->right=NULL;
	tmp->value=vl;
	return tmp;
}
node* buildtree(data *a,int n){
	node*tree=NULL;
	map<int,node*> m;
	for(int i=1;i<=n;i++){
		node*parent;
		if(m.find(a[i].cha)==m.end()){//khong tim thay trong map
			parent=newnode(a[i].cha);//tao node cha;
			m[a[i].cha]=parent;//khoi tao key(a[i].cha) co value(parent)
			if(tree==NULL) tree=parent;//xay cay
			//a[i].cha dau tien se luon laf goc
		}
		else //tim thay key(a[i].cha trong map
			parent=m[a[i].cha];
		node* child=newnode(a[i].con);
		if(a[i].lr=='L') parent->left=child;
		else parent->right=child;
		m[a[i].con]=child;
	}
	return tree;
}
int compare_tree(node* root1,node*root2){
	if(root1==NULL&&root2==NULL) return 1;
	if(root1!=NULL&&root2!=NULL){
		return(root1->value==root2->value && compare_tree(root1->left,root2->left) && compare_tree(root1->right,root2->right));
	}
	return 0;
	}


	
	

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		data a[n+3],b[n+3];
		for(int i=1;i<=n;i++)
			cin>>a[i].cha>>a[i].con>>a[i].lr;
		int m;
		cin>>m;
		for(int i=1;i<=m;i++)
			cin>>b[i].cha>>b[i].con>>b[i].lr;
		cout<<compare_tree(buildtree(a,n),buildtree(b,m));
		cout<<endl;
		
	}
}
