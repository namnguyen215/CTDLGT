#include<bits/stdc++.h>
using namespace std;

string solve(string s){
	stack<int> stnumber;
	stack<char> stchar;
	string tmp="",result="";
	for(int i=0;i<s.length();i++){
		int count=0;
		if(s[i]>='0'&&s[i]<='9'){
			while(s[i]>='0'&&s[i]<='9'){
				count=count*10+s[i]-'0';
				i++;
			}
		i--;
		stnumber.push(count);
		}
		else if(s[i]=='['){
			if(s[i-1]>=0&&s[i-1]<='9'){
				stchar.push(s[i]);
			}
			else{
				stchar.push(s[i]);
				stnumber.push(1);
		}
		}
		else if(s[i]==']'){
			int count=0;
			tmp="";
			if(!stnumber.empty()){
				count=stnumber.top();
				stnumber.pop();
			}
			while(!stchar.empty()&&stchar.top()!='['){
				tmp=stchar.top()+tmp;
				stchar.pop();
			}
			if(!stchar.empty()&&stchar.top()=='[') stchar.pop();
			for(int i=0;i<count;i++) result=result+tmp;
			for(int j=0;j<result.length();j++)
				stchar.push(result[j]);
			result="";
			}
		else stchar.push(s[i]);
		}
		while(!stchar.empty()){
			result=stchar.top()+result;
			stchar.pop();
		}
		return result;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
