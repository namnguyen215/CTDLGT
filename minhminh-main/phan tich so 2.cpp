#include<bits/stdc++.h>
using namespace std;
int OK=1;
int a[11];
int k;
/*
5
4 1
3 2
3 1 1
2 2 1
2 1 1 1
1 1 1 1 1
*/
void in(){
	cout<<"(";
	for(int i=1;i<=k;i++){
	if(i<k)	cout<<a[i]<<" ";
	else cout<<a[i]<<") ";
	}
	 
}
void xuli(){
	int i=k;
	int j,R,S,D;
     while (i > 0 && a[i]==1 ) i--;
     if (i>0 ) {
              a[i] --;   D = k - i + 1;
              R = D / a[i];    S = D % a[i];
              k= i;
       if (R>0) {
             for ( j = i +1; j<=i + R; j++)
                       a[j] = a[i];
             k = k + R;
        }
        if (S>0 ){
              k = k +1; a[k] = S;
        }
     }
     else OK =0;
}




int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	k=1;
	for(int i=1;i<=k;i++)
		a[i]=n;
	int d=0;
	while(OK!=0) {
		d++;
		xuli();
	}
	cout<<d<<endl;
	OK=1;
	k=1;
	for(int i=1;i<=k;i++)
		a[i]=n;
	while(OK!=0) {
		in();
		xuli();
	}
	OK=1;
	cout<<endl;	  
	}
return 0;
}
