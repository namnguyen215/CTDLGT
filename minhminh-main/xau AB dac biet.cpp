#include <bits/stdc++.h>
using namespace std;

int n,k;
string s;
bool ok=true;

bool check(){
	int d=0,d1=0;
	int c[100005],ar[100005]={};
	int x=0;
	int y=0;
	for(int i=0;i<n;i++){
		if(s[i]!='A') {
			c[y]=d;
			ar[c[y]]++;
			y++;
			d=0;
		}
		else{
			if(i==n-1){
				d++;
				c[y]=d;
				ar[c[y]]++;
				y++;
			}
			else
			d++;
			
		}
			x=max(d,x);
			
		
		}
	if(x==k&&ar[x]==1) return true;
	return false;
}
void in(){
	for(int i=0; i<n; i++){
		cout << s[i];
	}
	cout <<endl;
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
		
		cin >> n>>k;
		for(int i=0; i<n; i++) s[i]='A';
		int dem=0;
		while(ok==true){
			if(check()==true)
				dem++;
				sinh();
		}
		cout<<dem<<endl;
		ok=true;
			
		for(int i=0; i<n; i++) s[i]='A';
			
			while(ok==true){
				if(check()==true)
				in();
				sinh();
		}
	}
