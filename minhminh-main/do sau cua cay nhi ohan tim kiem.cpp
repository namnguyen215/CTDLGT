#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node*left;
	node*right;
};
node* newnode(int vl){
	node* tmp=new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	return tmp;
}
struct data{
	int cha,con;
	char lr;
};
node*insert(node*a,int vl){
	if(a==NULL) a=newnode(vl);
	else{
		if(vl<a->value) a->left=insert(a->left,vl);
		else if(vl>a->value) a->right=insert(a->right,vl);
	}
	return a;
}
int dosau(node*a){

	if(a->left==NULL&&a->right==NULL) return 0;
	if(a->left!=NULL&&a->right!=NULL) return max(dosau(a->left),dosau(a->right))+1;
	else if(a->left==NULL&&a->right!=NULL) return dosau(a->right)+1;
	else if(a->left!=NULL&&a->right==NULL) return dosau(a->left)+1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4];
	
		node* root=NULL;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			root=insert(root,a[i]);
		}
	cout<<dosau(root)<<endl;
		
		
	}
}
