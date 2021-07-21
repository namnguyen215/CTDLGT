#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
bool kt(vector<int> v,int x){
	for(int i=0;i<v.size();i++) if(x==v[i]) return false;
	return true;
	}
int main(){
    int n;
    cin>>n;
    int a[n+4];
   	vector<int> b;
   	b.clear();
    for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		
		if(b.empty()||kt(b,a[i])==true) {cout<<a[i]<<" ";
			b.push_back(a[i]);
		}
	}

    
}
