#include<bits/stdc++.h>
#define m 10001
using namespace std;
vector<int> ke[m];
int n,e,s,t;

int truoc[m];
bool chuaxet[m];
void DFS(int u){
		chuaxet[u]=false;
		for(int k=0;k<ke[u].size();k++){
			if(chuaxet[ke[u][k]]==true){
				truoc[ke[u][k]]=u;
				DFS(ke[u][k]);
				
			}
		}
	}
void road(){
    if(truoc[t]==0) cout<<-1<<endl;
    else{
        stack<int> st;
        st.push(t);
        int u=truoc[t];
        while(u!=s){
        	st.push(u);
        	u=truoc[u];
		}
		cout<<s<<" ";
		while(!st.empty()){
			int x=st.top();
			st.pop();
			cout<<x<<" ";
		}
		cout<<endl;
    }
    
}
void reinit(){
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		truoc[i]=0;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>e>>s>>t;
		int x,y;
		for(int i=1;i<=n;i++)
		
			ke[i].clear();
		for(int i=1;i<=e;i++){
			cin>>x>>y;
			ke[x].push_back(y);
		}
		reinit();
		DFS(s);
		road();	
		reinit;
	}
}
