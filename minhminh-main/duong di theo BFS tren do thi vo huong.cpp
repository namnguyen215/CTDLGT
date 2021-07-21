#include<bits/stdc++.h>
#define max 1002
using namespace std;

int n,e,s,t;
int  a[max][max];
int truoc[max];
bool chuaxet[max];
void BFS(int u){
		queue<int> h;
		chuaxet[u]=false;
		h.push(u);
		while(!h.empty()){
			int r=h.front();
		
			h.pop();
			for(int i=1;i<=n;i++){
				if(a[r][i]==1&&chuaxet[i]==true){
					h.push(i);
					truoc[i]=r;
					chuaxet[i]=false;
					
				}
			}
		}
}
void road(){
    if(truoc[t]==0) cout<<-1<<endl;
    else{
        int j=t;
        int a[1000];
        a[0]=t;
        int d=1;
        while(truoc[j]!=s){
        	a[d++]=truoc[j];
            j=truoc[j];
        }
     	a[d]=s;
    	for(int i=d;i>=0;i--) cout<<a[i]<<" ";
     	cout<<endl;
    }
    
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>e>>s>>t;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) a[i][j]=0;
		int x,y;
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		for(int i=1;i<=n;i++) chuaxet[i]=true;
		BFS(s);
		road();	
	}
}
