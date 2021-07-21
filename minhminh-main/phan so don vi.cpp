#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	int x;
	while(t--){
		long long p,q;
		cin>>p>>q;
		while(1){
			if(q%p==0){
				cout<<"1/"<<q/p<<endl;
				break;
			}
			else{
				x=q/p+1;
				cout<<"1/"<<x<<" + ";
				p=p*x-q;
				q=q*x;
			}
		}
	}
}
