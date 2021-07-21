#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		//dung bubble sort//
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				if(abs(x-a[j])>abs(x-a[j+1]))
					swap(a[j],a[j+1]);
				}
		}
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	
	}
}

