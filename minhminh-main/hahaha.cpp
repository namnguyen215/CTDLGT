#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int ok=1;
bool check(){
	int d;
	for(int i=0;i<n;i++){
		if(s[i]=='H'){
			d=0;
			while(s[i]=='H'){
				i++;
				d++;
			}
		if(d>1) return false;
	}
	}
	if(s[0]=='H'&&s[n-1]=='A') return true;
	return false;
	}
void in(){
	for(int i=0;i<n;i++) cout<<s[i];
	cout<<endl;
	}
void sinh(){
	int i=n-1;
	while(i>=0&&s[i]=='H'){
		s[i]='A';
		i--;
	}
	if(i>=0) s[i]='H';
	else ok=0;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) s[i]='A';
		while(ok==1){
			if(check()==true)
			in();
			sinh();
		}
		ok=1;
	}
}
	
		

