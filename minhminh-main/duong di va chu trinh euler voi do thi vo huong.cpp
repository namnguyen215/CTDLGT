#include<bits/stdc++.h>
using namespace std;
/*do thi vo huong neu co 
	chu trinh euler thi ta ca cac dinh co boc chan
	co duong di euler neu co 2 bac le
*/


int main(){
	int t;
	cin>>t;
	while(t--){
		int v,n,n1,n2;
		cin>>n>>v;
		int l[v+6]={0},r[v+6]={0};
		for(int i=1;i<=v;i++){
			cin>>n1>>n2;
			l[n1]++;
			r[n2]++;
		}
		int d=0;
		for(int i=1;i<=n;i++){
			if((r[i]+l[i])%2!=0) d++;
		}
		if(d==0) cout<<2<<endl;
		else if(d==2) cout<<1<<endl;
		else cout<<0<<endl;
}}
		
		
