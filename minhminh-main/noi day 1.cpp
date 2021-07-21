#include<bits/stdc++.h>
using namespace std;
			
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4];
		priority_queue<int,vector<int>,greater<int> > b;
			for(int i=1;i<=n;i++){
			cin>>a[i];
			
		}
		sort(a+1,a+1+n);
			for(int i=1;i<=n;i++) b.push(a[i]);
		
		long long s=0;
		while(b.size()>1){
			int first=b.top(); b.pop();
			int second=b.top(); b.pop();
			s+=(second+first);
			b.push(second+first);
			
		}
		cout<<s<<endl;
		}
	}
