#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node*left;
	node*right;
};
struct data{
	int cha,con;
	char lr;
};
node*newnode(int vl){
	node* tmp=new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	return tmp;
}
//xay dung cay tu de bai
node* buildtree(data a[],int n){
	map<int,node*> m;
	node* tree=NULL;
	for(int i=1;i<=n;i++){
		node*parent;
		if(m.find(a[i].cha)==m.end()){
			parent=newnode(a[i].cha);
			m[a[i].cha]=parent;
			if(tree==NULL) tree=parent;
		}
		else parent=m[a[i].cha];
		node*child=newnode(a[i].con);
		if(a[i].lr=='L') parent->left=child;
		else parent->right=child;
		m[a[i].con]=child;
	}
	return tree;
		
	
}
vector<int> v;
void preorder(node* tree){
	if(tree!=NULL){
	
	v.push_back(tree->value);
	preorder(tree->left);
	preorder(tree->right);
}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		v.clear();
		data a[n+6];
		for(int i=1;i<=n;i++) cin>>a[i].cha>>a[i].con>>a[i].lr;
		preorder(buildtree(a,n));
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
