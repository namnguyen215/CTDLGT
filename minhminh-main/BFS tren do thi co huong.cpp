#include<bits/stdc++.h>
#define max 1002
using namespace std;

int n,k;
int  a[max][max];
bool chuaxet[max];
void BFS(int u){
		queue<int> h;
		chuaxet[u]=false;
		h.push(u);
		while(!h.empty()){
			int s=h.front();
			cout<<s<<" ";
			h.pop();
			for(int i=1;i<=n;i++){
				if(a[s][i]==1&&chuaxet[i]==true){
					h.push(i);
					chuaxet[i]=false;
				}
			}
		}
}
		
int main(){
	int t;
	cin>>t;
	while(t--){
		int u;
		cin>>n>>k>>u;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) a[i][j]=0;
		int x,y;
		for(int i=1;i<=k;i++){
			cin>>x>>y;
			a[x][y]=1;
		
		}
		for(int i=1;i<=n;i++) chuaxet[i]=true;
		BFS(u);
		cout<<endl;
		}
}
