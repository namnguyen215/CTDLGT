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
//hàm duyet theo thu tu xoan oc(spiral-order)
void spiral_order(node* tree){
	stack<node*> s1; //chua cac muc cua node de in tu right->left
	stack<node*>s2; //chua cac muc cua node de in tu left->right
	s1.push(tree);
	while(!s1.empty()||!s2.empty()){
		while(!s1.empty()){
			node* tmp=s1.top();
			s1.pop();
			cout<<tmp->value<<" ";
			if(tmp->right!=NULL) s2.push(tmp->right);
			if(tmp->left!=NULL) s2.push(tmp->left);
		}
		while(!s2.empty()){
			node* tmp=s2.top();
			s2.pop();
			cout<<tmp->value<<" ";
			if(tmp->left!=NULL) s1.push(tmp->left);
			if(tmp->right!=NULL) s1.push(tmp->right);
		}
	}
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
		spiral_order(buildtree(a,n));
		cout<<endl;
		
	}
}
