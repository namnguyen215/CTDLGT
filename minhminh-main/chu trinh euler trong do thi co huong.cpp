#include<bits/stdc++.h>
using namespace std;
/*do thi co huong neu co chu trinh euler thi ta ca cac dinh cua no co deg+=deg-
*/

bool kiemtra(int n,int deg_plus[],int deg_subtract[]){
	for(int i=1;i<=n;i++) 
		if(deg_plus[i]!=deg_subtract[i]) return false;
	return true;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int v,n,n1,n2;
		cin>>n>>v;
		int pl[v+6]={0},str[v+6]={0};
		for(int i=1;i<=v;i++){
			cin>>n1>>n2;
			pl[n1]++;
			str[n2]++;
		}
		if(kiemtra(n,pl,str)==true) cout<<1<<endl;
		else cout<<0<<endl;
}}
		
		
