#include<bits/stdc++.h>
#define max 1002
using namespace std;

int n,k;
int  a[max][max];
bool chuaxet[max];
void BFS(int u){
		chuaxet[u]=false;
		queue<int> h;
		h.push(u);
		while(!h.empty()){
			int s=h.front();
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
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) a[i][j]=0;
		int x,y;
		for(int i=1;i<=k;i++){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		for(int i=1;i<=n;i++) chuaxet[i]=true;
			
		int d=0;
		for(int i=1;i<=n;i++)
			if(chuaxet[i]==true){
				d++;
				BFS(i);
			}
		cout<<d<<endl;
		}
}
