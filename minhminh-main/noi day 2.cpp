#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;			
int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+4];
		priority_queue<long long,vector<long long>,greater<long long> > b;
			for(long long i=1;i<=n;i++){
			cin>>a[i];
			
		}
		sort(a+1,a+1+n);
			for(long long i=1;i<=n;i++) b.push(a[i]);
		
		long long s=0;
		while(b.size()>1){
			long long first=b.top(); b.pop();
			long long second=b.top(); b.pop();
			s+=(second+first);
			s=s%m;
			b.push((second+first)%m);
			
		}
		cout<<s%m<<endl;
		}
	}
