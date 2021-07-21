#include<bits/stdc++.h>
using namespace std;



int main(){
	int test;
	cin>>test;
	while(test--){
		int t;
		cin>>t;
		int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
		t1=t/1000;
		t=t-1000*t1;
		t2=t/500;
		t-=500*t2;
		t3=t/200;
		t-=200*t3;
		t4=t/100;
		t-=100*t4;
		t5=t/50;
		t-=50*t5;
		t6=t/20;
		t-=20*t6;
		t7=t/10;
		t-=10*t7;
		t8=t/5;
		t-=5*t8;
		t9=t/2;
		t-=2*t9;
		t10=t;
		cout<<t1+t2+t3+t4+t5+t6+t7+t8+t9+t10<<endl;
				
	}
}

