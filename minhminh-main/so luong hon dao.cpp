#include<bits/stdc++.h>
#define me 1003
#define INF 100000000
using namespace std;
bool chuaxet[me][me];
int a[me][me];
int m,n;

int mrow[8]={-1,-1,-1,0,0,1,1,1};
int mcol[8]={-1,0,1,-1,1,-1,0,1};
void DFS(int x,int y){
	chuaxet[x][y]=false;
	for(int i=0;i<8;i++){
	
	int hang=x+mrow[i];
	int cot=y+mcol[i];
	if(hang>=0&&hang<n&&cot>=0&&cot<m)
		if(a[hang][cot]==1&&chuaxet[hang][cot]) DFS(hang,cot);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				chuaxet[i][j]=true;
			}
		int dem=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if(a[i][j]==1&&chuaxet[i][j]==true){
					DFS(i,j);
					dem++;
				}
			}
		cout<<dem<<endl;	
		}
	}

