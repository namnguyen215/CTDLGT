#include<bits/stdc++.h>
#define m 1003
#define INF 1e9
using namespace std;
int n,e,s;

int d[m];
typedef pair<int,int> data;
vector<data> a[m];
priority_queue<data,vector<data>,greater<data> > q;
	void dijkstra(int s){
		for(int i=1;i<=n;i++) d[i]=1e9;
		d[s]=0;
	
		q.push(data(0,s));
		while(!q.empty()){
			int u=q.top().second;//dinh sao cho nhan dan co gia trij min
			q.pop();
			for(int i=0;i<a[u].size();i++){
				int v=a[u][i].second;
				if(d[v]>d[u]+a[u][i].first){
					d[v]=d[u]+a[u][i].first;
					q.push(data(d[v],v));
				}
			}
		}
	//in
	for(int i=1;i<=n;i++) cout<<d[i]<<" ";
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>e>>s;
		for(int i=1;i<=n;i++) a[i].clear();
		for(int i=1;i<=e;i++){
			int x,y,k;
			cin>>x>>y>>k;
		
			a[x].push_back(data(k,y));
			a[y].push_back(data(k,x));
		}
		
		dijkstra(s);
		cout<<endl;
	}
}
