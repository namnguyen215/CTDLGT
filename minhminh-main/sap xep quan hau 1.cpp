#include<bits/stdc++.h>
#define MAX 15
using namespace std;

int a[MAX];
int cot[MAX],xuoi[MAX*2],nguoc[MAX*2];
int n, d=0;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			a[i]=j;
			cot[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n)	d++;
			else Try(i+1);
			cot[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;
}
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cot[i]=true;
		for(int i=1;i<=2*MAX;i++) {
			xuoi[i]=true;
			nguoc[i]=true;
		}
		d=0;
		
		Try(1);
		if(d==0) cout<<-1<<endl;
		else cout<<d<<endl;
					
		}

}
