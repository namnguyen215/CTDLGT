#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[101],v[105];
vector<vector<int> > u;
 void Try(int i){
 	for(int j=0;j<=1;j++){
 		a[i]=j;
 		if(i==n){
 			int s=0;
 			for(int x=1;x<=n;x++)
 				if(a[x]==1) s+=v[x];
 			if(s==k){
 				vector<int> g;
 				for(int x=1;x<=n;x++)
 					if(a[x]==1){
 						g.push_back(v[x]);
 					}
 				u.push_back(g);
 			}
 		}
 		else Try(i+1);
 	}
}
 				 						
int main(){
	int t;
	cin>>t;
	while(t--){
		u.clear();
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>v[i];
		sort(v+1,v+1+n);
		Try(1);
		if(u.size()==0) cout<<-1<<endl;
		else{
			sort(u.begin(),u.end());
			for(int i=0;i<u.size();i++){
				cout<<"[";
				for(int j=0;j<u[i].size()-1;j++)
				 cout<<u[i][j]<<" ";
				cout<< u[i][u[i].size()-1]<<"] ";
		}
	}
	cout<<endl;
	
	}
	}
