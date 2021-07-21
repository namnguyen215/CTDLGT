#include<bits/stdc++.h>
using namespace std;

//TAPP QUAN SU
// N,K
//CHON K NGUOI TIEP THEO LA SINH TO HOP TIEP THEO CHAP K CUA N

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k+3];
		int b[100]={0};
		for(int i=1;i<=k;i++) {
			cin>>a[i];
			b[a[i]]=1;
		}
		//sinh to hop chap k cua n
		int y=k;
		while(y>0&&a[y]==n-k+y) y--;
		if(y>0){
			a[y]++;
			for(int j=y+1;j<=k;j++) a[j]=a[y]+j-y;
			for(int i=1;i<=k;i++) b[a[i]]=0;//danh dau chien si bi lap lai trong lan chon tiep theo
			int d=0;
			for(int i=1;i<=40;i++) 
				if(b[i]==1) d++;
			cout<<d;
		}
		else cout<<k;
	cout<<endl;
}
}
