#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n+3][n+3];
	vector<int> v[n+3];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(a[i][j]==1) cout<<j<<" ";
			cout<<endl;
	}
}
