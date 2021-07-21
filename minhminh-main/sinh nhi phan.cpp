#include<bits/stdc++.h>
using namespace std;
int n,a[100005],ok=1;
//sinh nhi phan
void in(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}

void sinh(){
	int i=n;
	while(i>0&&a[i]==1) {
		a[i]=0;
		i--;
		}
	if(i>0) a[i]=1;
	else ok=0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		while(ok==1){
			in();
			sinh();
		}
		cout<<endl;
		ok=1;
	}
}
