#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4],res[n+3];
		res[n-1]=-1;
		int x;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-2;i>=0;i--){
			int d=0;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]){
					d++;
					x=j;
					break;
				}
			}
			if(d!=0){
				int d1=0;
					for(int k=x+1;k<n;k++){
						if(a[k]<a[x]){
							d1++;
							res[i]=a[k];
							break;
						}
					}
					if(d1==0) res[i]=-1;
			}
			else res[i]=-1;
		}
		for(int i=0;i<n;i++) cout<<res[i]<<" ";
		cout<<endl;
	}				

}

