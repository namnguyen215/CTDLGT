#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n+4];
		long long b[n+1];
		for(long long i=0;i<n;i++) cin>>a[i];
		stack<long long> st;
		for(long long i=n-1;i>=0;i--){
			while(!st.empty()&&st.top()<=a[i]) st.pop();
			if(st.empty()) b[i]=-1;
			else b[i]=st.top();
			st.push(a[i]);
		}
			
	for(long long i=0;i<n;i++) cout<<b[i]<<" ";
	cout<<endl;	
	}
}
