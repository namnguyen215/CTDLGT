#include<bits/stdc++.h>
using namespace std;
int solve(string s1,string s2,string s3){
	int a[103][103][103];
	for(int i=0;i<=s1.length();i++){
		for(int j=0;j<=s2.length();j++){
			for(int k=0;k<=s3.length();k++){
				if(i==0||j==0||k==0) a[i][j][k]=0;
				else if(s1[i-1]==s2[j-1]&&s1[i-1]==s3[k-1])
					a[i][j][k]=a[i-1][j-1][k-1]+1;
				else
					a[i][j][k]=max(max(a[i-1][j][k],a[i][j-1][k]),a[i][j][k-1]);
			}
		}
	}
	return a[s1.length()][s2.length()][s3.length()];
}
int main(){
    int t;
	cin>>t;
    while(t--)
    {	
		int m,n,p;
		cin>>m>>n>>p;
		string a,b,c;
    	cin>>a>>b>>c;
    	cout<<solve(a,b,c)<<endl;
		
    }
}
