#include<bits/stdc++.h>
using namespace std;
void summax(int a[],int n){
	int smax=INT_MIN;
	int in[n+2],de[n+2];
	for(int i=0;i<n;i++){
		in[i]=a[i];
		de[i]=a[i];
	}
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(a[i]>a[j]&&in[i]<in[j]+a[i]) in[i]=in[j]+a[i];
	for(int i=n-2;i>=0;i--)
		for(int j=n-1;j>i;j--){
			if(a[i]>a[j]&&de[i]<de[j]+a[i]) de[i]=de[j]+a[i];
		}
	for(int i=0;i<n;i++)
		smax=max(smax,in[i]+de[i]-a[i]);
	cout<<smax<<endl;
	}
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n+3]; 
    	for(int i=0;i<n;i++) cin>>a[i];
    	summax(a,n);
}
    	
}



















