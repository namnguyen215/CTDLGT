#include<bits/stdc++.h>
using namespace std;
//tao node
struct node{
	int value;
	node* left;
	node* right;
};
struct data{
	int cha,con;
	char lr;
};

//tao node roi rac co gia trij value
node*newnode(int vl){
	node *tmp=new node;
	tmp->value=vl;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
//ham ktr node la
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
//in ra ket qua
void solve(node*root){
	int level=0,leaflevel=0;
	if(check(root,level,&leaflevel)==true) cout<<1<<endl;
	else cout<<0<<endl;
}
//xay dung cay tu de bai
node* builtree(data *a,int n){
	node *tree=NULL;
	map<int,node*> m;
	for(int i=1;i<=n;i++){
		node*parent;
		if(m.find(a[i].cha)==m.end()){
			parent=newnode(a[i].cha);
			m[a[i].cha]=parent;
			if(tree==NULL) tree=parent;
		}
		else parent=m[a[i].cha];
		node* child=newnode(a[i].con);
		if(a[i].lr=='L') parent->left=child;
		else parent->right=child;
		m[a[i].con]=child;
	}
	return tree;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		data a[n+2];
		for(int i=1;i<=n;i++)
			cin>>a[i].cha>>a[i].con>>a[i].lr;
		solve(builtree(a,n));
	}
}
