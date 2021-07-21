#include<bits/stdc++.h>
using namespace std;
void index_bracket(string s){
	int left=1;
	stack<int> right;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			cout<<left<<" ";
			right.push(left);
			left++;
		}
		else if(s[i]==')'){
			cout<<right.top()<<" ";
			right.pop();
		
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		index_bracket( s);
		cout<<endl;
	}
}

