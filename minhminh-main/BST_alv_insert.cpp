#include<bits/stdc++.h>
using namespace std;
//cay nhi phan tim kiem can bang(avl)
//chen BST binh thuong / ket hop cap nhat chieu cao cua node
//so sanh chieu cau cau hai cay con trai vs phai (thuc hien quay trai hoac phai neu khong can bang)
struct node{
	int value;
	node* left;
	node*right;
	int height;
};

node* newnode(int vl){
	node* tmp=new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	tmp->height=1;
	return tmp;
}
//ham cap nhat chieu cao node
int update_height(node*tree){
	if(tree==NULL) return 0;
	return tree->height;
}
//ham cap nhat muc chenh lech do sau giua cay con ben trai va phai
int getbalance(node*tree){
	if(tree==NULL) return 0;
	return update_height(tree->left)-update_height(tree->right);// left-right
}
//ham xoay trai
node* leftrotate(node* tree){
	node* a=tree->right;//node goc la a
	node* tmp=a->left;
	
	a->left=tree;//node goc dau thanh node con trai cua node goc moi
	tree->right=tmp;
	//cap nhat chieu cao
	tree->height=max(update_height(tree->left),update_height(tree->right))+1;
	a->height=max(update_height(a->left),update_height(a->right))+1;
	return a;
}
//ham xoay phai
node* rightrotate(node* tree){
	node* a=tree->left;//node goc la a
	node* tmp=a->right;
	
	a->right=tree;//node goc dau thanh node con phai cua node goc moi
	tree->left=tmp;
	//cap nhat chieu cao
	tree->height=max(update_height(tree->left),update_height(tree->right))+1;
	a->height=max(update_height(a->left),update_height(a->right))+1;
	return a;
}
//xay dung cay nhi phan tim kiem avl
node* insert(node*tree,int vl){
	//b1: chen BST nhu bth
	if(tree==NULL) return newnode(vl);
	if(vl<tree->value)
		tree->left=insert(tree->left,vl);
	else if(vl>tree->value)
		tree->right=insert(tree->right,vl);

	//b2:cap nhat chieu cao cua node hien tai
	tree->height=max(update_height(tree->left),update_height(tree->right))+1;
	//b3:kiem tra tinh can bang va dua chung ve cb neu khong cb
	int left_subtract_right=getbalance(tree);
		// neu ko can bang, co 4 truong hop
		//th1: left lef case
		if(left_subtract_right>1&&vl<tree->left->value)
			return rightrotate(tree);
		//th2: right right case
		if(left_subtract_right<-1&&vl>tree->right->value)
			return leftrotate(tree);
		//th3: left right case;
		if(left_subtract_right>1&&vl>tree->left->value){
			tree->left=leftrotate(tree->left);
			return rightrotate(tree);
		}
		if(left_subtract_right<-1&&vl<tree->right->value){
			tree->right=rightrotate(tree->right);
			return leftrotate(tree);
		}
		return tree;
		
}
void preorder(node* root){
	if(root!=NULL){
		cout<<root->value<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10003];
		node*root=NULL;
		
	
		for(int i=1;i<=n;i++){
			cin>>a[i];
			root=insert(root,a[i]);
		}
	cout<<root->value<<" ";
	cout<<endl;
		
	}
}
