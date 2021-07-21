#include<bits/stdc++.h>
#define max 1002
using namespace std;

void nhan(int a[],int b[],int m,int n){
	int *res=new int[m+n-1];
	for(int i=0;i<m+n-1;i++) res[i]=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) res[i+j]+=a[i]*b[j];
	
	}
	for(int i=0;i<m+n-1;i++) cout<<res[i]<<" ";
	cout<<endl;
	}
		
int main(){
	int test;
	cin>>test;
	while(test--){
		int m,n;
		cin>>m>>n;
		int a[m+4],b[n+4];
		for(int i=0;i<m;i++) cin>>a[i];
		for(int i=0;i<n;i++ ) cin>>b[i];
		nhan(a,b,m,n);
	}
}
