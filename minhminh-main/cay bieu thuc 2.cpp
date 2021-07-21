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

int solve(char c,int a,int b){
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='*') return a*b;
	if(c=='/') return a/b;
}	
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int a[n];
		char d;
		stack<char> dau;
		deque<int> so;
		for(int i=1;i<=(n-1)/2;i++) {
			cin>>d;
			dau.push(d);
		}
		for(int i=1;i<=((n-1)/2)+1;i++) {
			cin>>a[i];
			so.push_back(a[i]);
		}
		while(!dau.empty()&&!so.empty()){
			char g=dau.top();
			dau.pop();
			int t1=so.back();
			so.pop_back();
			int t2=so.back();
			so.pop_back();
			int f=solve(g,t2,t1);
			so.push_front(f);
		}
		cout<<so.front()<<endl;	
		
	}
}
