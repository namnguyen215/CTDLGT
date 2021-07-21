#include<bits/stdc++.h>
using namespace std;
int n,a[100005],ok=1;
//sinh nhi phan có k bit 1
bool check(){
	int d=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n-i+1])
			d++;
		}
	if(d==0) return true;
	return false;
}
void in(){
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
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
		cin>>n;
		while(ok==1){
			if(check()==true)
			in();
			sinh();
		}
		
}
