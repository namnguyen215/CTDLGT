#include<bits/stdc++.h>
#define m 1003
#define INF 1000000000
using namespace std;
int n,e;
vector <int> ke[m];
bool chuaxet[m];
bool DFS(int u,int parent){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++){
		if(chuaxet[ke[u][i]]==true){
			if(DFS(ke[u][i],u)) return true;
	    }
		else if(ke[u][i]!=parent) return true;
	}
	return false;
}
bool is_cyclic(){
	for(int i=1;i<=n;i++){
		if(chuaxet[i]==true){
			if(DFS(i,-1)) return true;
		}
}
return false;
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
		if(is_cyclic()==true) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
		
}