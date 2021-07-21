#include<bits/stdc++.h>
using namespace std;
//sap xep chen(insertion_sort)
void insertion_sort(int a[],int n){
	int value,t;
	int d=1;
    for(int i=0;i<n;i++){
		if(i==0) cout<<"Buoc "<<i<<": "<<a[i]<<endl;
		else{
			value=a[i];// sap xep chen
			t=i-1;
			while(t>=0&&a[t]>value){
				a[t+1]=a[t];
				t--;
			}
			a[t+1]=value;//sap xep chen
			cout<<"Buoc "<<d<<": ";
			for(int k=0;k<=i;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
			d++;
		}
	}
}			
int main(){
        int n;
		cin>>n;
		int a[101];
		for(int i=0;i<n;i++) cin>>a[i];
		insertion_sort(a,n);
    
}
