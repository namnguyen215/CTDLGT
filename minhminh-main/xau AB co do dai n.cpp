#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool ok=true;


void in(){
	for(int i=0; i<n; i++){
		cout << s[i];
	}
	cout <<" ";
}
void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='B'){
		s[i]='A';
		i--;
	}
	if(i>=0) s[i]='B';
	else ok=false;
}
int main(){
		int t;
		cin>>t;
		while(t--){
		cin >> n;
		for(int i=0; i<n; i++) s[i]='A';
			while(ok==true){
				in();
				sinh();
		}
		cout<<endl;
		ok=true;
	}
}
