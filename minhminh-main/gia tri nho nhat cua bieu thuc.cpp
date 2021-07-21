#include<bits/stdc++.h>
using namespace std;


int main(){
 int t;
 cin>>t;
 while(t--){
 	int  n;
 	long long a[100006],b[100007];
 	cin>>n;
 	for(int i=0;i<n;i++) cin>>a[i];
 	for(int i=0;i<n;i++) cin>>b[i];
 	sort(a,a+n);
 	sort(b,b+n);
 	long long s=0;
 	for(int i=0;i<n;i++) 
 		s+=a[i]*b[n-1-i];
 	cout<<s<<endl;
}
}
