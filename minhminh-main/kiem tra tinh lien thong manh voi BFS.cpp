#include<bits/stdc++.h>
#define m 10001
using namespace std;
vector<int> ke[m];
int n,e;


bool chuaxet[m];
void DFS(int u){
		chuaxet[u]=false;
		for(int k=0;k<ke[u].size();k++){
			if(chuaxet[ke[u][k]]==true){
				
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
			
		}
	}
}

void reinit(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		
	}
}
int tplt(){
	for(int i=1;i<=n;i++)
		if(chuaxet[i]==true) return 0;
	return 1;
}
int ltmanh(){
   
    for(int k=1;k<=n;k++){
        chuaxet[k]=false;
      	BFS(k);
        if(tplt()==0) return 0;
        else reinit();
    }
    return 1;
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
		}
		reinit();
		if(ltmanh()==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	
	}
	}
