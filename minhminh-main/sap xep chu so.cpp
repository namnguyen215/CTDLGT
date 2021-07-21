#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[16*n];
		int d=0;
		for(int i=0;i<n;i++) {
		cin>>a[i];
		long long t=a[i];
		while(t>0){
			b[d++]=t%10;
			t/=10;
		}
		}
		sort(b,b+d);
		int c[11]={};
		for(int i=0;i<d;i++)
				c[b[i]]++;
		for(int i=0;i<11;i++)
			if(c[i]>=1) cout<<i<<" ";
		cout<<endl;
			
	}
}


