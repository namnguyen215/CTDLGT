#include<bits/stdc++.h>
using namespace std;
int m=1e6+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+4],res[n+3];
		vector<int> x(m,0);
		res[n-1]=-1;
		for(int i=0;i<n;i++){
			cin>>a[i];
			x[a[i]]++;
		}
		for(int i=n-2;i>=0;i--){
			int d=0;
			for(int j=i+1;j<n;j++){
				if(x[a[j]]>x[a[i]]){
					d=1;;
					res[i]=a[j];
					break;
				}
			}
			if(d==0) res[i]=-1;
		}
		for(int i=0;i<n;i++) cout<<res[i]<<" ";
		cout<<endl;
	}				

}
