#include<bits/stdc++.h>
using namespace std;
//tim boi so
int m,n;//n la so da cho, m la do dai xau tim dk
bool ok;
long long x=1e8;//boi so can tim
int a[100];
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==m){
			long long s=0;
			for(int k=1;k<=m;k++) s=s*10+a[k];
			s*=9;
			if(s%n==0&&s>=n){
				x=min(x,s);
				ok=true;//ket qua tim duoc se dung
			}
		}
		else Try(i+1);
		}
	}
		
			

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		m=1;
		x=1e18;
		ok=false;
		while(m<17&&ok==false){
			Try(1);
			m++;// tang dan do dai cua xau
		}
	    cout<<x<<endl;
		
	}
}
