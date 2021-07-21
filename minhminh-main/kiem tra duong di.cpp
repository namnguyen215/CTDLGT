#include<bits/stdc++.h>
#define m 10001
using namespace std;
vector<int> ke[m];
int n,e;

int truoc[m];
bool chuaxet[m];
void DFS(int u){
		chuaxet[u]=false;
		for(int k=0;k<ke[u].size();k++){
			if(chuaxet[ke[u][k]]==true){
				truoc[ke[u][k]]=u;
				DFS(ke[u][k]);
				
			}
		}
	}
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int s=q.front();
		q.pop();
		for(int i=0;i<ke[s].size();i++)
		if(chuaxet[ke[s][i]]==true){
			q.push(ke[s][i]);
			chuaxet[ke[s][i]]=false;
			truoc[ke[s][i]]=s;
		}
	}
}
void road(int s,int t){
    if(truoc[t]==0) {
	cout<<"NO"<<endl;
	return;
	}
    else{
       cout<<"YES"<<endl;
    }
    
}
void reinit(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		truoc[i]=0;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>e;
		int x,y;
		for(int i=1;i<=n;i++)
		
			ke[i].clear();
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int q;
		cin>>q;
		while(q--){
		
		int s,t;
		cin>>s>>t;
		
		reinit();
		BFS(s);
		road(s,t);	
		reinit();
	}
	}
	
}
