#include<bits/stdc++.h>
using namespace std;
string s;
int a[100][100],n;
bool check=false;
vector<string> v;

// di chuyen trong me cung 1
void Try(int i,int j,string s){
	if(i==0 && j==0 && a[i][j]==0){
		check=false;
		return;
	}
	if(i==n-1&&j==n-1&&a[n-1][n-1]==1){
		v.push_back(s);// luu gia tri vao vector
		check=true;
		return ;
	}
	if(i<n-1 && a[i+1][j]==1)//down
		Try(i+1,j,s+"D");
	if(j<n-1 && a[i][j+1]==1)//right
		Try(i,j+1,s+"R");
	
	if(i<n-1&&j<n-1&& a[i][j+1]==0&& a[i+1][j]==0||i>n-1&&j>n-1)
		return;
}		
	

	
int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		check=false;
		v.clear();
		Try(0,0,"");
		if(check==false) cout<<-1<<endl;
		else{
			sort(v.begin(),v.end());
			for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
			cout<<endl;
					
		}
}
}
