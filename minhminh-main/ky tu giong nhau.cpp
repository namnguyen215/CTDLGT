#include<bits/stdc++.h>
using namespace std;
int solve(int n,int in,int de,int co){
	if(n==0) return 0;
	if(n==1) return in;
	int d[n+4]={0};
	d[1]=in;
	for(int i=2;i<=n;i++){
		if(i%2==0) d[i]=min(d[i-1]+in,d[i/2]+co);
		else d[i]=min(d[i-1]+in,d[(i+1)/2]+co+de);
	}
	return d[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,d,c;
		cin>>n>>i>>d>>c;
		cout<<solve(n,i,d,c)<<endl;
	}
}

