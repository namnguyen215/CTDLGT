#include<bits/stdc++.h>
#define m 1001
using namespace std;
int n,k;
int a[m][m];
bool chuaxet[m];

void BFS(int u){
	chuaxet[u]=false;
	queue<int> h;
	h.push(u);
	while(!h.empty()){
		int s=h.front();
		h.pop();
		for(int p=1;p<=n;p++)
			if(a[s][p]==1&&chuaxet[p]==true){
				h.push(p);
				chuaxet[p]=false;
			}
	}
}
void init(){
	for(int i=1;i<=n;i++) chuaxet[i]=true;
}
int tplt(){
	for(int i=1;i<=n;i++)
		if(chuaxet[i]==true) return 0;
	return 1;
}
void tru(){
    
    for(int i=1;i<=n;i++){
    	chuaxet[i]=false;
    	if(i==1) BFS(2);
        else BFS(1);
        if(tplt()==0) cout<<i<<" ";
        init();
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
		init();
		tru();
		cout<<endl;
}		
		
}
