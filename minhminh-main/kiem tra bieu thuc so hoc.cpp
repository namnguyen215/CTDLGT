#include<bits/stdc++.h>
using namespace std;

bool thua(string &s){
	stack<char> st;
	bool flag= true;//co thua ngoac
	for(int i=0;i<s.length();i++){
		if(s[i]==')'){
			char top=st.top();
			st.pop();
			flag= true;
			while(!st.empty()&&top!='('){
				if(top=='+'||top=='-'||top=='*'||top=='/') flag=false;
				top=st.top();
				st.pop();
				}
			if(flag==true) return true;
			}
		else st.push(s[i]);
		}
	return false;
	}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		getline(cin,a);
		if(thua(a)==true) cout<<"Yes"<<endl;
		else  cout<<"No"<<endl;
		}
	}
