#include<bits/stdc++.h>
using namespace std;
int n,a[100005],ok=1;

void in(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}

void sinh(){
	int i=n-1;
	while(i>0&& a[i]<a[i+1]) i--;
	if(i>0){
		int k=n;
		while(a[k]>a[i]) k--;
		swap(a[i],a[k]);
		int d=i+1,c=n;
		while(d<c){
			swap(a[d],a[c]);
			d++;
			c--;
		}
	}
	else ok=0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) a[i]=n-i+1;
		while(ok==1){
			in();
			sinh();
		}
		cout<<endl;
		ok=1;
	}
}


