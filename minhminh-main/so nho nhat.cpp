#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		if(s==0&&d==1) cout<<0<<endl;
		else if(s==0&&d!=1) cout<<-1<<endl;
		else if(d*9<s) cout<<-1<<endl;
		else{
			int res[d+1];
			s-=1;
			for(int i=d-1;i>0;i--){
				if(s>9){
					res[i]=9;
					s-=9;
				}
				else{
					res[i]=s;
					s=0;
				}
		}
		res[0]=s+1;
		for(int i=0;i<d;i++) cout<<res[i];
		cout<<endl;
	}
	}
}
