#include<bits/stdc++.h>
using namespace std;

int xl1(int m){
	int i=1;
	int d=0;
	while(i<=m){
		int a[100]={0};
		int t=i;
		int check=1;
		while(t>0){
			int cs=t%10;
			a[cs]++;
			t=t/10;
			if(a[cs]>1||cs>5) {
				check=0;
				break;
			}
		}
		
		if(check==1) d++;
		i++;
	}
	return d;
}
int xl2(int m){
	int i=1;
	int d=0;
	while(i<=m){
		int a[100]={0};
		int t=i;
		int check=1;
		while(t>0){
			int cs=t%10;
			a[cs]++;
			t=t/10;
			if(a[cs]>1||cs>5) {
				check=0;
				break;
			}
		}
		
		if(i==m&&check==1) d=d+0;
		else if(check==1) d++;
		i++;
	}
	return d;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
    	int a,b;
    	cin>>a>>b;
    	cout<<xl1(b)-xl2(a)<<endl;
        }
    }

