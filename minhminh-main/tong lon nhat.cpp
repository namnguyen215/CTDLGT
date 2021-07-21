#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node*left;
	node*right;
};

node*newnode(int vl){
	node*tmp=new node;
	tmp->value=vl;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void insert(node*a,int x,int y, char z){
	if(a!=NULL){
		if(a->value==x){
		if(z=='L') a->left=newnode(y);
		else a->right=newnode(y);
		}
	else{
		insert(a->left,x,y,z);
		insert(a->right,x,y,z);
	}
	}
}
int maxpath(node*a,int&sum){
	if(a==NULL) return 0;
	if(a->left==NULL&&a->right==NULL) return a->value;
	int l=maxpath(a->left,sum);
	int r=maxpath(a->right,sum);
	if(a->left!=NULL&&a->right!=NULL){
		sum=max(sum,l+r+a->value);
		return max(l,r)+a->value;
	}
	if(a->left!=NULL&&a->right==NULL) return l+a->value;
	if(a->left==NULL&&a->right!=NULL) return r+a->value;
}
void solve(node*a){
	int sum=INT_MIN;
	int x=maxpath(a,sum);
	if(sum==INT_MIN) cout<<x<<endl;
	else cout<<sum<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		node*root;
		for(int i=1;i<=n;i++){
			int x,y;
			char z;
			cin>>x>>y>>z;
			if(i==1) root=newnode(x);
			insert(root,x,y,z);
		}
		solve(root);
	}
}
