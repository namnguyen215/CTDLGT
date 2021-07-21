#include<bits/stdc++.h>
using namespace std;


	
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<4) cout<<-1<<endl;
		else{
			int check=0;
			for(int k=n/7;k>=0;k--){
				int x=n-(k*7);
				if(x%4==0){
				check=1;
				for(int i=0;i<x/4;i++) cout<<4;
				for(int i=0;i<k;i++) cout<<7;
			cout<<endl;
			break;
			}
			}
			if(check==0) cout<<-1<<endl;
		}	
}
}
