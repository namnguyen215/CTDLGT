#include<bits/stdc++.h>
using namespace std;
long long a[100002],b[100002],c[100002];
int x,y,z;
void solve(){
	int dem=0;
	int m=0,n=0,p=0;
	while(m<x&&n<y&&p<z){
		if(a[m]==b[n] && a[m]==c[p]){
			cout<<a[m]<<" ";
			m++; n++; p++;
			dem++;
			}
		else if(a[m]<b[n]) m++;
		else if(b[n]<c[p]) n++;
		else p++;
	}
	if(dem==0) cout<<"NO";
}


int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		for(int i=0;i<x;i++) cin>>a[i];
		for(int i=0;i<y;i++) cin>>b[i];
		for(int i=0;i<z;i++) cin>>c[i];
		solve();
		cout<<endl;
	}	
		
}

