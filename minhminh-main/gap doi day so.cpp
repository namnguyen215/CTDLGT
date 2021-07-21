#include<bits/stdc++.h>
using namespace std;

//gap doi day so
//1
//121
//1213121
 long long tinh(int n,long long k){
	long long m=pow(2,n-1);//xac dinh vi tri chinh giua
	if(k==m) return n;
	if(k<m) return tinh (n-1,k);
	return    tinh(n-1,k-m);
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	
}
}

