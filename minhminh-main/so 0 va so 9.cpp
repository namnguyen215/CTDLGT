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
		
		queue<string> q;
		string s;
		s="9";
		q.push(s);
	
		for(int i=1;i<=600003;i++){
		
			s=q.front();
			q.pop();
			
			v.push_back(xl(s));
			q.push(s+'0');
			q.push(s+'9');
			
		}
	while(t--){
		long long n;
		cin>>n;
	
		long long i=0;
		while(i<v.size()) {
		
			if(v[i]%n==0) {
			cout<<v[i]<<endl;
			break;
		}
		i++;
	}
	
}
}
