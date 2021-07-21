#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int OK=1;
// to hop nguoc
// 245->235; 123->345
void sinh(){
	int i=k;
	while(a[i]==a[i-1]+1) i--;
	if(i>0){
		a[i]--;
		for(int j=i+1;j<=k;j++)
			a[j]=n-k+j;
	for(int i=1;i<=k;i++)
		cout<<a[i]<<" ";
		}
	else {OK=0;
 for(int j=k;j>=1;j--)
		cout<<n-j+1<<" ";
	}
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++)
			cin>>a[i];
		sinh();
		cout<<endl;

	}
return 0;
}
