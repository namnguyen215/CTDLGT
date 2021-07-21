#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		queue<string> q;
		vector<string> v;
		v.clear();
		string s="";
		q.push("6");
		q.push("8");
		while(s.length()<=n){
			s=q.front();
			q.pop();
			
			if(s.length()<=n) {
				
				v.push_back(s);
			}
			q.push(s+'6');
			q.push(s+'8');
			}
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
		}
		
}
