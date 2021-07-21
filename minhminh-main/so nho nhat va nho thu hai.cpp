#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int d=0;
		for(int i=1;i<n;i++){
			if(a[i]>a[0]){
				d=1;
				cout<<a[0]<<" "<<a[i]<<endl;
				break;
			}
		}
		if(d==0) cout<<-1<<endl;
	}
}

