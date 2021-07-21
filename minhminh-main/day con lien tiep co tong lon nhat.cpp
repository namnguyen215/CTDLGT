#include<bits/stdc++.h>
using namespace std;

int maxsummid(int a[],int d,int m, int c){
	int suml=0,sumr=0,sum_left=-1e9+7,sum_right=-1e9+7;
	for(int i=m;i>=d;i--){
		suml+=a[i];
		if(suml>sum_left) sum_left=suml;
	}
	for(int i=m+1;i<=c;i++){
		sumr+=a[i];
		if(sumr>sum_right) sum_right=sumr;
	}
	return sum_left+sum_right;
}

int maxsum(int a[],int d,int c){
	if(d==c) return a[d];
	int m=d+(c-d)/2;
	int t=max(maxsum(a,d,m),maxsum(a,m+1,c));
	return max(t,maxsummid(a,d,m,c));
}
	

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<maxsum(a,1,n)<<endl;
	

}
}
