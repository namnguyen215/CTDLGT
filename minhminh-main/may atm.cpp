#include<bits/stdc++.h>
using namespace std;
int n,s;
int a[50];
bool check;
int kq;
void trackback(int index,long long sum,int count){
	for(int i=1;i>=0;i--){
	if(sum>s||check==true) return;
	if(index==n&&sum>s) return;
	if(sum==s){
		kq=min(kq,count);
		check=true;
		return;
	}
	if(index<n)
	trackback(index+1,sum+a[index]*i,count+i);
}
		
}					
int main(){
	int t;
	cin>>t;
	while(t--){
	
		cin>>n>>s;
		
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n,greater<int>() );
		check=false;
		kq=INT_MAX;
		trackback(0,0,0);
		if(check==false) cout<<-1<<endl;
		else cout<<kq<<endl;
	}
	}
