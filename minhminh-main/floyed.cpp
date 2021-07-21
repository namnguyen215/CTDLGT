#include<bits/stdc++.h>
#define m 1003
#define INF 1000000000
using namespace std;
int n,e;
int a1[m][m];//ma tranj ke
	int d5[m][m];//nang dan
	
	int p[m][m];//dinh tiep
	void readdata1(){
		cin>>n>>e;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) a1[i][j]=INF;
		for(int i=1;i<=n;i++) a1[i][i]=0;
		for(int i=1;i<=e;i++){
			int x,y,z;
			cin>>x>>y>>z;
			a1[x][y]=z;
			a1[y][x]=z;
		}
	}
	void floyed(){
		//khoi tao
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++){
				d5[i][j]=a1[i][j];
			
				
			}
		//lap
		for(int k=1;k<=n;k++){
			for(int i=1;i<=n;i++)
				for(int j=1;j<=n;j++){
					if(d5[i][j]>d5[i][k]+d5[k][j]){
						d5[i][j]=d5[i][k]+d5[k][j];
					
					}
				}
		}
	}
int main(){
	readdata1();
	floyed();
	int q;
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<d5[x][y]<<endl;
	}
		
}
