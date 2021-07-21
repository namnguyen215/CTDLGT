#include<bits/stdc++.h>
#define max 1002
using namespace std;

int n,k;
int  a[max][max];
bool chuaxet[max];
void DFS(int u){
		cout<<u<<" ";
		chuaxet[u]=false;
		for(int k=1;k<=n;k++){
			if(a[u][k]==1&&chuaxet[k]==true){
				DFS(k);
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
		DFS(u);
		cout<<endl;
		}
}
