#include<bits/stdc++.h>
using namespace std;

//CHO inorder kiem tra xem co la cay nhij phan tim kiem khong
//inorder cua cay nhi phan tim kiem luon la mot day tang dan
int check(int in[],int n){
	if(n==0||n==1) return 1;
	for(int i=1;i<n;i++){
		if(in[i]>=in[i+1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int in[1005];
		for(int i=1;i<=n;i++) cin>>in[i];
		cout<<check(in,n)<<endl;
	}
}
