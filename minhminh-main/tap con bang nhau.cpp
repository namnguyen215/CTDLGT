#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100];
		long long s=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			s+=a[i];
		}
		int k=s/2;
		if(s%2==1) cout<<"NO"<<endl;
		else{
		int b[k+2]={0};
		for(int i=1;i<=n;i++){
			b[a[i]]=1;
			for(int j=k;j>=a[i];j--){
				if(b[j]==0&&b[j-a[i]]==1) b[j]=1;
		}
		}
		if(b[k]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	}
}
