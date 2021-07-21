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
//xay dung cay nhi phân
node* buildtree(int a[],int n){
	int i=1;
	
	node*root=newnode(a[0]);
	queue<node*> q;
	q.push(root);
	while(!q.empty()&&i<n){
		node*goc=q.front();
	
		q.pop();
		
		goc->left=newnode(a[i]);
		q.push(goc->left);
		i++;
		if(i>=n) break;
		goc->right=newnode(a[i]);
		q.push(goc->right);
		i++;
	}
	return root;
}
void postorder(node* root){
	if(root!=NULL){
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->value<<" ";
	}
	return;
}
	

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n+4],b[n+4];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		postorder(buildtree(b,n));
		cout<<endl;
	}
}
