#include<bits/stdc++.h>
#define m 1000003
#define INF 1000000000
using namespace std;
int n,e;
vector <int> ke[m];
bool chuaxet[m];
int sc;


int BFS(int u){
				chuaxet[u]=false;
				queue<int> q;
				q.push(u);
				sc=0;
				while(!q.empty()){
					int s=q.front();
					q.pop();
					for(int i=0;i<ke[s].size();i++){
						if(chuaxet[ke[s][i]]==true){
							q.push(ke[s][i]);
							sc++;
							chuaxet[ke[s][i]]=false;
						}
					}
				}
				return sc+1;
		}

int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n>>e;
		for(int i=1;i<=n;i++){
			chuaxet[i]=true;
			ke[i].clear();
		}
		for(int i=1;i<=e;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
	
		int res=0;
		for(int i=1;i<=n;i++){
			if(chuaxet[i]==true){
					
				int x=BFS(i);
				res=max(res,x);
			}
		}
		cout<<res<<endl;
	}
		
}
