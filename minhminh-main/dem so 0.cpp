#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		for(int i=1;i<=n;i++) cin>>a[i];
		int d=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1){
				d=i-1;
				break;
			}
			}
		if(d==0) cout<<n<<endl;
		else cout<<d<<endl;
	}

}
