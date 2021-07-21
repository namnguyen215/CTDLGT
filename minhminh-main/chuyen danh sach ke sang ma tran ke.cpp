#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	int a[n+2][n+2];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++) a[i][j]=0;
	for(int i=1;i<=n;i++){
		int tmp=0;
		getline(cin,s);
		s+=" ";
		for(int j=0;j<s.size();j++){
			if(s[j]>='0'&&s[j]<='9') tmp=tmp*10+s[j]-'0';
			else if(tmp>0){
				a[i][tmp]=1;
				tmp=0;
			}
		}
	}	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) 
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
		
		
