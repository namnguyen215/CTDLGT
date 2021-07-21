#include<bits/stdc++.h>
#define m 1005
using namespace std;

vector<int> ke[m];
bool chuaxet[m];
int n;
int truoc[m];
 void DFS(int u){
 	chuaxet[u]=false;
 	for(int i=0;i<ke[u].size();i++){
 		if(chuaxet[ke[u][i]]==true){
 			truoc[ke[u][i]]=u;
 			DFS(ke[u][i]);
		 }
 			
	 }
 }
 
 void road(int s,int t){
 	if(truoc[t]!=0){
 		int u=t;
 		stack<int> st;
 		while(u!=s){
 			st.push(u);
 			u=truoc[u];
		 }
		 st.push(s);
		 while(!st.empty()){
		 	cout<<st.top()<<" ";
		 	st.pop();
		 }
		 cout<<endl;
	 }
 }
 int main(){
 	int t;
 	cin>>t;
 	while(t--){
 		int n;
 		cin>>n;
 		for(int i=1;i<=n;i++){
 			chuaxet[i]=true;
 			ke[i].clear();
 			truoc[i]=true;
		}
		for(int i=1;i<=n-1;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
		
		}
		DFS(1);
		for(int i=1;i<=n;i++){
			if(ke[i].size()==0&&chuaxet[i]==false){
					road(1,i);
			}
		}
	 }
 }
