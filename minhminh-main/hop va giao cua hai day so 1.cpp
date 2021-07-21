#include<bits/stdc++.h>
using namespace std;

	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[200006];
		int b[100002]={};
		for(int i=0;i<n+m;i++) {
			cin>>a[i];
			b[a[i]]++;
		}
		for(int i=0;i<100002;i++){
			if(b[i]>0) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<100002;i++){
			if(b[i]>1) cout<<i<<" ";
		}
		cout<<endl;
		}
}
