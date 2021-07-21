#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node* left;
	node*right;
};

node* newnode(int vl){
	node* tmp=new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	return tmp;
}
//xay dung cay nhi phan tim kiem
node* insert(node*tree,int vl){
	if(tree==NULL) return newnode(vl);
	if(vl<tree->value)
		tree->left=insert(tree->left,vl);
	else if(vl>tree->value)
		tree->right=insert(tree->right,vl);
	return tree;
}
node* deletenode(node* root,int vl){
	if(root==NULL) return root;
	if(root->value>vl){
		root->left=deletenode(root->left,vl);
		return root;
	}
	else if(root->value<vl){
		root->right=deletenode(root->right,vl);
		return root;
	}
	else if(root->value==vl){
		if(!root->left){//node can xoa chi co cay con ben phai
			node* tmp=root->right;
			delete root;
			return tmp;
		}
		if(!root->right){//node can xoa chi co cay con ben trai
			node* tmp=root->left;
			delete root;
			return tmp;
		}
		else{// node can xoa co du hai cay con
			// node thay the la node trai nhat cua cay con ben phai
		node*replace=root->right;//node thay the node xoa;
		node*parent_rp=root;// node cha cua node replace;
		while(replace->left){
			parent_rp=replace;
			replace=replace->left;
		}
		if(parent_rp!=root)//ton tai node trai cua cau cay con ben phai
			parent_rp->left=replace->right;
		else
		// khong ton tai node trai cua cua cay con phai;
			parent_rp->right=replace->right;
		root->value=replace->value;//thay gia tri cua node xoa bang node thay the
		delete replace;//giai phong node thay the;
		return root;
		}
		
	}
}
void preorder(node* root){
	if(root!=NULL){
		cout<<root->value<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->value<<" ";
		inorder(root->right);
		
	}
}
void postorder(node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->value<<" ";
	}
}
int main(){
	node*tree=NULL;
	int n;
	while(true){
		cin>>n;
		if(n==1){
			int x;
			cin>>x;
			tree=insert(tree,x);
		}
		else if(n==2){
			int y;
			cin>>y;
			tree=deletenode(tree,y);
		}
		else if(n==3){
			preorder(tree);
			cout<<endl;
		}
		else if(n==4){
			inorder(tree);
			cout<<endl;
		}
		else if(n==5){
			postorder(tree);
			cout<<endl;
		}
	}
}

