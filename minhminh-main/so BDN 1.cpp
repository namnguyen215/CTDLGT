#include<bits/stdc++.h>
using namespace std;

long long xl(string s){
	long long res=0;
	for(int i=0;i<s.length();i++) res=res*10+(s[i]-'0');
	return res;
}

int main(){
	int t;
	cin>>t;
	vector<long long> v;
		v.clear();
		queue<string> q;
		string s;
		s="1";
		q.push(s);
	
		for(int i=1;i<=200003;i++){
		
			s=q.front();
			q.pop();
			
			v.push_back(xl(s));
			q.push(s+'0');
			q.push(s+'1');
			
		}
	while(t--){
		long long n;
		cin>>n;
		
		long long i=0;
		while(v[i]<=n&&i<v.size()) i++;
		cout<<i<<endl;
}
}
