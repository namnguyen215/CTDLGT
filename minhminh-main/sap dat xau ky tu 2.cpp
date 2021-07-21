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
		int d;
		cin>>d>>s;
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
		int dem=0;
		for(int i=0;i<k;i++){
			int p=x[0].count;
			for(int z=0;z<p;z++)
				if(i+(z*d)>n){
					dem++;
					break;
				}
			break;
		}
		if(dem==0) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
