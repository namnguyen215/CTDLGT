#include<bits/stdc++.h>
#define m 1005
using namespace std;
vector<int> ke[m];
bool chuaxet[m];
int n;
int kc[m];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++){
		if(chuaxet[ke[u][i]]==true){
			kc[ke[u][i]]=kc[u]+1;
			DFS(ke[u][i]);
		}
	}
}
void init(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		kc[i]=0;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
	
		cin>>n;
		for(int i=1;i<=n;i++){
			chuaxet[i]=true;
			kc[i]=0;
			ke[i].clear();
		}
		for(int i=1;i<=n-1;i++) {
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q;
		cin>>q;
			int a,b;
		while(q--){
		
			cin>>a>>b;
			init();
			DFS(a);
			cout<<kc[b]<<endl;
			
		}
	}
}
