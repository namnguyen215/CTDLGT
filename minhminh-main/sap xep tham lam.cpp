#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2],b[n+2];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int d=0;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
				d++;
				cout<<"No"<<endl;
				break;
			}
		}
		if(d==0) cout<<"Yes"<<endl;
		
		
	}
}
