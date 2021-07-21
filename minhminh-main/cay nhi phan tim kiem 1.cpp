#include<bits/stdc++.h>
using namespace std;
//tao node
struct node{
	int value;
	node*left;
	node*right;
};

node* newnode(int vl){
	node*tmp=new node;
	tmp->left=tmp->right=NULL;
	tmp->value=vl;
	return tmp;
}
node* insert(node* r,int vl)
{
	if(r==NULL) r=newnode(vl);
	else{
		if(vl<r->value) r->left=insert(r->left,vl);
		else if(vl>r->value) r->right=insert(r->right,vl);
	}
	return r;
}
void post(node* a){
	if(a!=NULL){
		
		post(a->left);
		post(a->right);
		cout<<a->value<<" ";
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+4];
		node*tree=NULL;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			tree=insert(tree,a[i]);
		}
		post(tree);
		cout<<endl;
	}
}
