#include<bits/stdc++.h>
using namespace std;
bool ok[100][100];
int m,n;//m hang,n cot
int d;
void Try(int i,int j){
	if(i==m&&j==n){
		d++;
		
	}
	
	if(i!=m&& ok[i+1][j]==true){// chua di qua,
		ok[i][j]=false;//danh dau di qua 
		Try(i+1,j);// down
		ok[i][j]=true;
	}
	if(j!=n&&ok[i][j+1]==true){
		ok[i][j]=false;//danh dau di qua 
		Try(i,j+1);// down
		ok[i][j]=true;
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		int a[100][100];
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++){
			 cin>>a[i][j];
			 ok[i][j]=true;
		}
		d=0;
		Try(1,1);
		cout<<d<<endl;
	}

}
