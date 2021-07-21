#include<bits/stdc++.h>
using namespace std;
struct cp{
	int first,second;
};
bool cmp(cp a, cp b){
	return a.first<b.first;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cp a[n+2];
		int d[n+3];
		for(int i=1;i<=n;i++){
			cin>>a[i].first>>a[i].second;
			d[i]=1;
		}
		sort(a+1,a+n+1,cmp);
		int len=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++)
				if(a[i].first>a[j].second) d[i]=max(d[i],d[j]+1);
			len=max(len,d[i]);
		}
		cout<<len<<endl;
	
	}
}

