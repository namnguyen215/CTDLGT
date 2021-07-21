#include<bits/stdc++.h>
using namespace std;

struct ma{
	int count;
	char value;
};
bool cmp(ma a,ma b){
	if(a.count==b.count) return a.value>b.value;
	return a.count>b.count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		ma x[n+5];
		int a[10001]={0};
		for(int i=0;i<n;i++) a[s[i]-'0']++;
		int k=0;
		for(int i=0;i<=10000;i++){
			if(a[i]>0){
				x[k].count=a[i];
				x[k].value=s[i];
				k++;
			}
		}
		sort(x,x+k,cmp);
		int p=x[0].count;
		if(p>(n/2)+n%2) cout<<-1<<endl;
		else cout<<1<<endl;
	}
}
