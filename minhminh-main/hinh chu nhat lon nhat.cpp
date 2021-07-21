#include<bits/stdc++.h>
using namespace std;


long long max_rect(long long a[],int n){
	stack<long long>s;
	long long maxrect=0;
	long long topstack;
	long long area_top;
	long long i=0;
	while(i<n){
		if(s.empty()||a[s.top()]<=a[i]) s.push(i++);
		else {
			topstack=s.top();
			s.pop();
			if(s.empty()) area_top=a[topstack]*i;
			else  area_top=a[topstack]*(i-s.top()-1);
			maxrect=max(maxrect,area_top);
		}
	}
	while(!s.empty()){
		topstack=s.top();
		s.pop();
		if(s.empty()) area_top=a[topstack]*i;
		else  area_top=a[topstack]*(i-s.top()-1);
		maxrect=max(maxrect,area_top);
	}
	return maxrect;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n+3];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<max_rect(a,n)<<endl;
	}
	
}
