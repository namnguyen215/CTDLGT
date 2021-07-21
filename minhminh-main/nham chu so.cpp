#include<bits/stdc++.h>
using namespace std;
 long long change56(string s){
 	long long t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='5')
			s[i]='6';
		t=t*10+(s[i]-'0');
	}
	return t;
	
}
long long  change65(string s){
	long long t=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='6')
			s[i]='5';	
		t=t*10+(s[i]-'0');
	}
	return t;
}

int main(){
		string s1,s2;
		cin>>s1>>s2;
		cout<<change65(s1)+change65(s2)<<" "<<change56(s1)+change56(s2)<<endl;
				
	
}

