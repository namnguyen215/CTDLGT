#include<bits/stdc++.h>
using namespace std;
//sap xep noi bot(bubble sort)
 void bubble_sort(int a[],int n){
 	int d=1;
 	for(int i=0;i<n-1;i++){
 		int t=0;
 		for(int j=0;j<n-1-i;j++){
 			if(a[j]>a[j+1]){
 				swap(a[j],a[j+1]);
 				t=1;
			}
 		}
 		if(t==0) break;
 		cout<<"Buoc "<<d<<": ";
 		for(int i=0;i<n;i++){
 			cout<<a[i]<<" ";
 		}
 		cout<<endl;
 		d++;
 		}
 	}
 			
int main(){
	int n;
	cin>>n;
	int a[101];
	for(int i=0;i<n;i++) cin>>a[i];
	bubble_sort(a,n);
}



