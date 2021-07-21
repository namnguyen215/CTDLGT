#include<bits/stdc++.h>
using namespace std;
//tao node
struct node{
	char value;
	node*left;
	node*right;
};
//tao node co gia tri roi rac
node* newnode(char vl){
	node*tmp=new node;
	tmp->left=tmp->right=NULL;
	tmp->value=vl;
	return tmp;
}
//kiem tra toan hang
bool operatorr(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^') return true;
	return false;
}
//in ra kq theo trung to: inorder:trai-goc-phai
void in(node*t){
	if(t){
		in(t->left);
		cout<<t->value;
		in(t->right);
	}
}
//xay dung cay tu hau to
node* builtree(string s){
	stack<node*> st;
	node*tree,*t1,*t2;
	for(int i=0;i<s.length();i++){//hau to nen se duyet tu dau xau
		if(!operatorr(s[i])){
			tree=newnode(s[i]);
			st.push(tree);
		}
		else{//la toan hang
		tree=newnode(s[i]);
		t1=st.top();
		st.pop();
		t2=st.top();
		st.pop();
		tree->right=t1;
		tree->left=t2;
		st.push(tree);
		}
	}
	tree=st.top();
	st.pop();
	return tree;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		in(builtree(s));
		cout<<endl;
	}
}
