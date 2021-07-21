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
vector<int> v;
void xl(node* tree){
	if(tree->left==NULL&&tree->right==NULL) v.push_back(tree->value);
	else if(tree->left!=NULL&&tree->right!=NULL){
		xl(tree->left);
		xl(tree->right);
	}
	else if(tree->left!=NULL&&tree->right==NULL) 	xl(tree->left);
	else if(tree->left==NULL&&tree->right!=NULL) 	xl(tree->right);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4];
		v.clear();
		node* root=NULL;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			root=insert(root,a[i]);
		}
		xl(root);
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
		
		
	}
}
