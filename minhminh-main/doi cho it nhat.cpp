#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[1005];
	for(int i=0;i<n;i++) cin>>a[i];
	int min,d=0;
	for(int i=0;i<n-1;i++){
		min=i;
		int check=0;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
				check=1;
			}
		}
		if(check==1){
		swap(a[i],a[min]);
		d++;}		
	}
	cout<<d<<endl;
	}			
}
