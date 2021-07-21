#include<bits/stdc++.h>
using namespace std;

void solve(string s,int k,string& maxx){
	if(k==0) return;
	int n=s.length();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[j]>s[i]) {
				swap(s[i],s[j]);
				if(s.compare(maxx)>0)
					maxx=s;
				solve(s,k-1,maxx);
				swap(s[i],s[j]);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		string maxx=s;
		solve(s,k,maxx);
		cout<<maxx<<endl;
	}
}
