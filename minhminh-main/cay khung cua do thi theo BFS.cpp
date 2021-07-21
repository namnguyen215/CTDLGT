#include<bits/stdc++.h>
#define m 1003
#define INF 1000000000
using namespace std;
int n,e;
vector <int> ke[m];
bool chuaxet[m];
int sc=0;
struct canh{
	int dau;
	int cuoi;
};
canh ee[m];
void BFS_TREE(int u){
				chuaxet[u]=false;
				queue<int> q;
				q.push(u);
				while(!q.empty()){
					int s=q.front();
					q.pop();
					for(int i=0;i<ke[s].size();i++){
						if(chuaxet[ke[s][i]]==true){
							q.push(ke[s][i]);
							sc++;
							ee[sc].dau=s;
							ee[sc].cuoi=ke[s][i];
							if(sc==n-1) return;
							chuaxet[ke[s][i]]=false;
						}
					}
				}
			}
void solve(int u){
	BFS_TREE(u);
	if(sc==n-1)
		for(int i=1;i<=sc;i++) cout<<ee[i].dau<<" "<<ee[i].cuoi<<endl;
	else cout<<-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int u;
		cin>>n>>e>>u;
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
		sc=0;
		solve(u);
	}
		
}
