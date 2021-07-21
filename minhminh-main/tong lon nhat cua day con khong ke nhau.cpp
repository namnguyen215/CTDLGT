#include<bits/stdc++.h>
using namespace std;
void  summax(int a[],int n){
	int incl=a[1];
	int excl=0;
	int new_excl;
	for(int i=2;i<=n;i++){
		new_excl=max(incl,excl);
		incl=excl+a[i];
		excl=new_excl;
}
cout<<max(incl,excl)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		summax(a,n);
}

}
