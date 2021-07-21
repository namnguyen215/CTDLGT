#include<bits/stdc++.h>
#define m 1000005
using namespace std;
int n;
vector<int> ke[m];
bool chuaxet[m];
int cao[m];


void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++){
			if(chuaxet[ke[u][i]]==false) continue;
			cao[ke[u][i]]=cao[u]+1;
			DFS(ke[u][i]);
		}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n;
		for(int i=1;i<=n;i++){
			chuaxet[i]=true;
			ke[i].clear();
		
		}
		for(int i=1;i<=n-1;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		DFS(1);
		cao[1]=0;
		int r=0;
		for(int i=1;i<=n;i++){
			r=max(r,cao[i]);
		}
		cout<<r<<endl;
	}
}
