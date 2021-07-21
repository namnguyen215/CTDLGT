#include<bits/stdc++.h>
using namespace std;
int change(int n,int m){
	if(n==m) return 0;
	if(n<0&& m>0) return 0;
	if(n>m) return n-m;
	if(m%2==0) return 1+change(n,m/2);
	if(m%2==1) return 1+change(n,m+1);
}

int main(){
	int t;
	cin>>t;

	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<change(n,m)<<endl;
	}
}
