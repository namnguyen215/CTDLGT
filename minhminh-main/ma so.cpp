#include<bits/stdc++.h>
#define m 100
using namespace std;




int b[m]={0};
string s;
int n;
vector<string> v1;
void Try(int i){
	for(int j=0;j<n;j++){
		if(!b[j]){
			s[i]=j+'A';
			b[j]=1;
			if(i==n-1) {
				string tmp="";
				for(int i=0;i<n;i++) tmp+=s[i];
				v1.push_back(tmp);
			}
			else Try(i+1);
			b[j]=0;
		}
	}
}
vector<string> v2;
void solve(){
	queue<string> q;
	for(int i=1;i<=n;i++) {
		string c;
		ostringstream convert;
		convert<<i;
		c=convert.str();
		q.push(c);
	}
	while(!q.empty()){
		string x=q.front();
		q.pop();
		if(x.length()==n) v2.push_back(x);
		if(x.length()>n) return;
		for(int i=1;i<=n;i++){
		string c;
		ostringstream convert;
		convert<<i;
		c=convert.str();
		string tmp=x+c;
		q.push(tmp);
		}
	}
}
	

int main(){
	
		v1.clear();
		v2.clear();
		cin>>n;
		Try(0);
		solve();
		for(int i=0;i<v1.size();i++) 
			for(int j=0;j<v2.size();j++)
				cout<<v1[i]<<v2[j]<<endl; 

	
}
