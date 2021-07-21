#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v[n+10];
		int a,b;
		for(int i=1;i<=k;i++){
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for(int i=1;i<=n;i++)
			sort(v[i].begin(),v[i].end());
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int j=0;j<v[i].size();j++)
				 cout<<v[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
}
		
		
