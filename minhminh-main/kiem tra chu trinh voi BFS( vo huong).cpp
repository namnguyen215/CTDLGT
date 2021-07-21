#include<bits/stdc++.h>
#define m 1003
#define INF 1000000000
using namespace std;
int n,e;
vector <int> ke[m];
bool chuaxet[m];
int truoc[m];
bool BFS(int u){
	chuaxet[u]=false;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		for(int i=0;i<ke[s].size();i++){
			if(chuaxet[ke[s][i]]){
				q.push(ke[s][i]);
				chuaxet[ke[s][i]]=true;
				truoc[ke[s][i]]=s;
			}
			else if(truoc[s]!=ke[s][i]) return true;
		}
	}
	return false;
}
bool is_cyclic(){
	for(int i=1;i<=n;i++){
		if(chuaxet[i]==true){
			if(BFS(i)) return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>e;
		for(int i=1;i<=n;i++){
			chuaxet[i]=true;
			ke[i].clear();
			truoc[i]=0;
		}
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		if(is_cyclic()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
		
}
