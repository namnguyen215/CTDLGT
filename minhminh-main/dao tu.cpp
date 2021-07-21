#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		
		getline(cin,s);
		vector<string> v;
		string mm="";
		for(int i=0;i<s.length();i++){
			if(s[i]==' ') {
				v.push_back(mm);
				mm="";
			}
			else mm=mm+s[i];
		}
		v.push_back(mm);
		for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
		cout<<endl;
		}
		
}
