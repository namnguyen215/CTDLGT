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
// HAM KIEM TRA CAY DAY DU
//node trung gan co 2 node con: neu mot node chi co 1 node con thi return false,con lai return true
int is_fulltree(node* tree){
	if(tree==NULL) return 1;
	if(tree->left==NULL&&tree->right==NULL) return 1;
	if(tree->left!=NULL&&tree->right!=NULL) return(is_fulltree(tree->left)&&is_fulltree(tree->right));
	return 0;
}
//ham kiem tra node la cung mot muc
bool check(node* root,int level,int*leaflevel){
	if(root==NULL) return true;
	if(root->left==NULL&&root->right==NULL){
		if(*leaflevel==0){
			*leaflevel=level;
			return true;
		}
		return(level==*leaflevel);
	}
	return check(root->left,level+1,leaflevel)&&check(root->right,level+1,leaflevel);
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
		int level=0,leaflevel=0;
		if(is_fulltree(buildtree(a,n))&&check(buildtree(a,n),level,&leaflevel))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		
	}
}
