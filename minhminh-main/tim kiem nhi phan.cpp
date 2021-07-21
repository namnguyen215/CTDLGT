#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int d,int c,int x){
	while(c>=d){
		int mid=d+(c-d)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) d=mid+1;
		 else c=mid-1;
		}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[100001];
		for(int i=1;i<=n;i++) cin>>a[i];
		int k=binarysearch(a,1,n,x);
		if(k==-1) cout<<"NO"<<endl;
		else cout<<k<<endl;
	}
}
