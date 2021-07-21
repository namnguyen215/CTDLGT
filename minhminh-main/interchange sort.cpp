#include<bits/stdc++.h>
using namespace std;
//sap xep doi truc tiep( interchange sort)
int main(){
	int n;
	cin>>n;
	int a[101];
	for(int i=0;i<n;i++) cin>>a[i];
	int d=1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i])
				swap(a[i],a[j]);
			}
		cout<<"Buoc "<<d<<": ";
		for(int k=0;k<n;k++) 
			cout<<a[k]<<" ";
		cout<<endl;
		d++;
			
		
	}
				
}

