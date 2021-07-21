#include<bits/stdc++.h>
using namespace std;
struct node{
	int value;
	node*left;
	node*right;
};
node* newnode(int vl){
	node* tmp= new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	return tmp;
}
node* build(int a[],int st,int en){
	if(st>en) return NULL;
	int m=(st+en)/2;
	node *r=newnode(a[m]);
	r->left=build(a,st,m-1);
	r->right=build(a,m+1,en);
	return r;
}
void pre(node*a){
	if(a!=NULL){
		cout<<a->value<<" ";
		pre(a->left);
		pre(a->right);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		pre(build(a,0,n-1));
		cout<<endl;
	}
}
