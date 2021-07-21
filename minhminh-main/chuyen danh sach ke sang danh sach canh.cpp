#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	vector<int> v[n+4];
	string s;
	for(int i=1;i<=n;i++){
		getline(cin,s);
		int temp=0;
		s+=" ";//tao khoang trong de day temp vao vector
		for(int j=0;j<s.size();j++){
			if(s[j]>='0'&&s[j]<='9') temp=temp*10+(s[j]-'0');
			else if(temp>0){
				v[i].push_back(temp);
				temp=0;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<v[i].size();j++){
			if(v[i][j]>i) cout<<i<<" "<<v[i][j]<<endl;
		}
		
	}
	}
