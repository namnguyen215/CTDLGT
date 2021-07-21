#include<bits/stdc++.h>
using namespace std;
void min_square(int n){
	if(n<=3) return ;
	int *a=new int[n+2];
	a[0]=0;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	for(int i=4;i<=n;i++){
		a[i]=i;
		for(int x=1;x<=ceil(sqrt(i));x++){
			int p=x*x;
			if(p>i) break;
			else a[i]=min(a[i],1+a[i-p]);
		}
	}
	int res=a[n];
	delete[] a;
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		min_square(n);
}

}
