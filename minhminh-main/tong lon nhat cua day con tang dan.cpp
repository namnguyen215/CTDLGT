#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[1005];
	int d[1005];
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		d[i]=a[i];
	}
	int f=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[j]<a[i]) d[i]=max(d[i],d[j]+a[i]);
		}
	f=max(f,d[i]);
	}
	cout<<f<<endl;		
}
}
