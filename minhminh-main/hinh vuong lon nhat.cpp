#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[550][550];
int  solve(){
	int b[550][550];
	int maxs;
	for(int i=0;i<n;i++) b[i][0]=a[i][0];
	for(int i=0;i<m;i++) b[0][i]=a[0][i];
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(a[i][j]==1)
				b[i][j]=min(b[i][j-1],min(b[i-1][j],b[i-1][j-1]))+1;
			else  b[i][j]=0;
		}
	}
	maxs=b[0][0];
		for(int i=1;i<n;i++)
			for(int j=1;j<m;j++)
				maxs=max(maxs,b[i][j]);
	return maxs;
}
int main(){
    int t;
	cin>>t;
    while(t--)
    {	cin>>n>>m;
    	for(int i=0;i<n;i++)
    		for(int j=0;j<m;j++) cin>>a[i][j];
    	cout<<solve()<<endl;
		
    }
}
