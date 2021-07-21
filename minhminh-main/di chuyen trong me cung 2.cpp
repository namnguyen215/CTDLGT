#include<bits/stdc++.h>
using namespace std;
string s;
int a[100][100],n;

bool check[100][100];
vector<string> v;

// di chuyen trong me cung 2
void Try(int i,int j,string s){
	if(a[1][1]==0||a[n][n]==0){
		
		return;
	}
	if(i==n&& j==n){
		v.push_back(s);// luu gia tri vao vector
	
		return ;
	}
	if(i!=n && a[i+1][j]==1&& check[i+1][j]==false)//down
		{	check[i][j]=true;
			Try(i+1,j,s+"D");
			check[i][j]=false;
		}
	if(j!=n && a[i][j+1]==1&& check[i][j+1]==false)//right
		{	check[i][j]=true;
			Try(i,j+1,s+"R");
			check[i][j]=false;
		}
	if(j!=1 && a[i][j-1] == 1&&check[i][j-1]==false)//left // vi tri[i-1][j] chua di qua
		{	check[i][j]=true;// di qua r
			Try(i,j-1,s+"L");
			check[i][j]=false;// chua di qua
		}
	if(i!=1 && a[i-1][j]==1&&check[i-1][j]==false)//up
		{	check[i][j]=true;
			Try(i-1,j,s+"U");
			check[i][j]=false;
		}
}		
	

	
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				{
					cin>>a[i][j];
					check[i][j]=false;
				}
			
		
		v.clear();
		Try(1,1,"");
		if(v.size()==0) cout<<-1<<endl;
		else{
			sort(v.begin(),v.end());
			for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
			cout<<endl;
					
		}
}
}
