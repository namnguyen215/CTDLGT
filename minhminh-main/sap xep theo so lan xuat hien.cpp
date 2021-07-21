#include<bits/stdc++.h>
using namespace std;

struct ma{
	int count;
	int value;
};
bool cmp(ma a,ma b){
	if(a.count==b.count) return a.value<b.value;
	return a.count>b.count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000],b[10001];
		memset(b,0,sizeof(b));
		ma x[n+5];
		for(int i=0;i<n;i++){
			 cin>>a[i];
			 b[a[i]]++;
		}
		int k=0;
		for(int i=0;i<=10000;i++){
			if(b[i]>=1){
				x[k].count=b[i];
				x[k].value=i;
				k++;
			}
		}
		sort(x,x+k,cmp);
		for(int i=0;i<k;i++)
			for(int j=1;j<=x[i].count;j++)
				cout<<x[i].value<<" ";
		cout<<endl;
	}
}
