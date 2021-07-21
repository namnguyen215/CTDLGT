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

void levelorder(node* root){
	vector<int>v;
	v.clear();
	if(root==NULL) return;
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* goc=q.front();
		v.push_back(goc->value);
		q.pop();
		
		if(goc->right!=NULL) q.push(goc->right);
		if(goc->left!=NULL) q.push(goc->left);
		
	}
	for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		data a[n+3];
		for(int i=1;i<=n;i++)
			cin>>a[i].cha>>a[i].con>>a[i].lr;
		levelorder(buildtree(a,n));
		cout<<endl;
		
	}
}
