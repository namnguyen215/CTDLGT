#include<bits/stdc++.h>
#define m 10003
#define INF 100000000
using namespace std;

int n,e;
bool chuaxet[m];
vector<int> ke[m];
int sc;
int dh;
struct canh{
	int dau;
	int cuoi;
	int ts;
};
canh ee[m];
bool cmp(canh a, canh b){
	if(a.ts==b.ts){
		if(a.dau==b.dau) return a.cuoi<b.cuoi;
		else return a.dau<b.dau;
	}
	else return a.ts<b.ts;
}
struct treee{
	int mot;
	int hai;
};
treee tt[m];
void DFS(int u){
	chuaxet[u]=false;
	for(int i=0;i<ke[u].size();i++)
		if(chuaxet[ke[u][i]]==true)
			DFS(ke[u][i]);
	}
void kruskal(){
	for(int i=1;i<=n;i++) ke[i].clear();
	sc=0;
	dh=0;
	sort(ee+1,ee+e+1,cmp);
	for(int i=1;i<=e;i++){
		int d=ee[i].dau;
		int c=ee[i].cuoi;
		for(int j=1;j<=n;j++) chuaxet[j]=true;
		DFS(d);
		if(chuaxet[c]==true){
			sc++;
			tt[sc].mot=d;
			tt[sc].hai=c;
			dh+=ee[i].ts;
			ke[d].push_back(c);
			ke[c].push_back(d);
		}
	}
}
void solve(){
	kruskal();
	if(sc==n-1) cout<<dh<<endl;
	else cout<<-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n>>e;
		for(int i=1;i<=e;i++){
			cin>>ee[i].dau>>ee[i].cuoi>>ee[i].ts;
		}
		solve();
	
	
}
	}

