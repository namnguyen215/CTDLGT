#include<bits/stdc++.h>
#define m 1000003
#define INF 1000000000
using namespace std;
int n,e;
vector <int> ke[m];
bool chuaxet[m];
int b[m];
int d=0;
bool ok;
void result(){
	//for(int i=1;i<=n;i++) cout<<b[i]<<" ";
	//cout<<endl;
	d++;
}
void path_hal(int k){

	
		for(int i=0;i<ke[b[k-1]].size();i++){
				if(k==n+1){
				result();
				//ok=true;
				return;
				}
			else if(chuaxet[ke[b[k-1]][i]]==true){
				b[k]=ke[b[k-1]][i];
				chuaxet[ke[b[k-1]][i]]=false;
				path_hal(k+1);
				chuaxet[ke[b[k-1]][i]]=true;
			}
		}
	}

void reinit(){
	for(int i=1;i<=n;i++) {
		chuaxet[i]=true;
		b[i]=0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n>>e;
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
		d=0;
		int k=0;
		for(int i=1;i<=n;i++){
			reinit();
			b[1]=i;
			chuaxet[i]=false;
			path_hal(2);
			if(d!=0) {
				cout<<1<<endl;
				k=1;
				break;
			}
		}
	if(k==0) cout<<0<<endl;
		
	}
		
}
