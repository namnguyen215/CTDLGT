#include<bits/stdc++.h>
using namespace std;

struct Matran{
	long long f[11][11];
};
int m=1e9+7;
int n;
Matran nhan(Matran A, Matran B){
	Matran C; int i,j,k;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++){
			C.f[i][j]=0;
			for(k=0; k<n; k++)
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%m)%m;
		}
	return C;
}
Matran powerM(Matran A, int b){
	if(b == 1) return A;
	Matran x = powerM(A,b/2);
	if(b%2==0)return nhan(x,x);
	return nhan(A,nhan(x,x));
}
int main(){
	int t;
	cin>>t;
	Matran A;
	while(t--){
		long long k;
	    cin>>n>>k;
  		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++) cin>>A.f[i][j];
	Matran kq=powerM(A,k);
	Matran s;
	s.f[0][0]=0;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			
				if(i==n-1){
					s.f[0][0]=(s.f[0][0]+kq.f[i][j])%m;
			}
			
		}
		cout<<s.f[0][0]<<endl;

	}
}
