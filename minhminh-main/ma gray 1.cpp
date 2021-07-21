#include<bits/stdc++.h>
using namespace std;
int n,k,a[100005],ok=1,b[100005];


void in(){
	for(int i=1;i<=n;i++)
		cout<<b[i];
	cout<<" ";
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
}

void sinh(){
	int i=n;
	while(i>0&&a[i]==1) {
		a[i]=0;
		b[i]=0;
		i--;
		}
	if(i>0) {
		a[i]=1;
		b[i]=1;
		}
	else ok=0;
}
void change(){
		for(int i=1;i<=n;i++){
			if(i==1) cout<<b[1];
			else{
				if(b[i]!=b[i-1]&&i>1) cout<<1;
				else cout<<0;
			}
		}
		cout<<" ";
		
	}
				
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) {a[i]=0;
				b[i]=0;
				}
		while(ok==1){
			change();
			sinh();
		}
		ok=1;
		cout<<endl;
	}
}
