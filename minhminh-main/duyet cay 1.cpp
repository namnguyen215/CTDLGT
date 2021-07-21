/*cach 1
#include<bits/stdc++.h>
using namespace std;

 static int idpre=0;

void printpost(int in[],int pre[],int begin,int end,map<int,int >m){
   
	if(begin>end) return;
	int index=m[pre[idpre++]];
	printpost(in,pre,begin,index-1,m);
	printpost(in,pre,index+1,end,m);
	cout<<in[index]<<" ";
}
void solve(int in[],int pre[],int n){
	map<int,int> m;
	for(int i=0;i<n;i++) m[in[i]]=i;
	printpost(in,pre,0,n-1,m);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int in[1005],pre[1005];
		for(int i=0;i<n;i++) cin>>in[i];
		for(int i=0;i<n;i++) cin>>pre[i];
		solve(in,pre,n);
		cout<<endl;
		idpre=0;
	
}
}
*/
//cach 2
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
//xay dung cay nhi phân tu inorder và preorder
/*
-vi tri dau tien trong pre se là nut goc có gtri pre[0]
-tim vi tri  i có gia tri pre[0] trong inorder;
-cay con bên trai tu dau den vi trí i-1;
-cay con ben phai tu i+1 den cuoi;
cu nhu vay de quy cho cay con trai và cay con phai 
*/
// hàm tìm kiem vi tri cua nut goc pre trong inorder
int search(int a[],int begin,int end,int value){
	
	for(int i=begin;i<= end;i++){
		if(a[i]==value) 
		return i;
	}
	
}
//xay dung cay
	static int idpre=0;//su dung static de luu lai gia tri trc do trong nhung loi goi ham tiep theo
node*buildtree(int in[],int pre[],int begin,int end){

	if(begin>end) return NULL;
	node* root=newnode(pre[idpre++]);//tao nut goc tu pre
	if(begin==end) return root;
	int index=search(in,begin,end,root->value);//tim vi tri co gia trij nut goc trong inorder
	//cay con ben trai
	root->left=buildtree(in,pre,begin,index-1);//dequy
	//cay cpn ben phai
	root->right=buildtree(in,pre,index+1,end);
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
		int a[1005],b[1005];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		postorder(buildtree(a,b,0,n-1));
		cout<<endl;
		idpre=0;
	}
}

