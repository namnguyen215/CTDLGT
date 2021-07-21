#include<bits/stdc++.h>
using namespace std;
/*day so 1
VD:INPUT
   1
   5
   1 2 3 4 5
   OUT PUT
   [48] [20 28] [8 12 16] [3 5 7 9 ] [1 2 3 4 5 ] 
*/
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2],b[n+2][n+2];
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			b[1][i]=a[i];
		}
		int cot=n-1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<=cot;j++){
				b[i][j]=b[i-1][j]+b[i-1][j+1];
			}
			cot--;
		}
		int cot1=n;
		for(int i=n;i>=1;i--){
			cout<<"[";
			
			for(int j=1;j<n-cot1+1;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<b[i][n-cot1+1];
			cot1--;
			cout<<"]";
			cout<<" ";
		}
		cout<<endl;				
	
}
}
