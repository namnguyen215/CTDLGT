#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		string s;
		s="1";
		q.push(s);
		for(int i=1;i<=n;i++){
			s=q.front();
			q.pop();
			cout<<s<<" ";
			q.push(s+'0');
			q.push(s+'1');
		}
		cout<<endl;
}
}
