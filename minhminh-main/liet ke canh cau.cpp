#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int> ke[1004];
bool chuaxet[1004];
void init(){
	
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		ke[i].clear();
	}
}
void reinit(){
	for(int i=1;i<=n;i++) {
		chuaxet[i]=true;
	
	}
}
void DFS(int u,int a1,int a2){
	chuaxet[u]=false;

	for(int i=0;i<ke[u].size();i++){
		if((u==a1&&ke[u][i]==a2)||(u==a2&&ke[u][i]==a1)) continue;
		if(chuaxet[ke[u][i]]){
			DFS(ke[u][i],a1,a2);
		}
	}
}
bool check(){
	for(int i=1;i<=n;i++){
		if(chuaxet[i]==true) return false;
		
	}
	return true;
}

void canh_cau(){
	for(int i=1;i<=n;i++){
		for(int j=0;j<ke[i].size();j++){
			
			DFS(1,i,ke[i][j]);
			if(check()==false&&i<ke[i][j]) cout<<i<<" "<<ke[i][j]<<" ";
			
			
			reinit();
		}
		
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n>>e;
		init();
		int x,y;
		for(int i=0;i<e;i++){
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		canh_cau();
		cout<<endl;
	}
}
