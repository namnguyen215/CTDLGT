#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int i,j,k;
	int d[n1],c[n2];
	for(int i=0;i<n1;i++) d[i]=a[l+i];
	for(int j=0;j<n2;j++) c[j]=a[m+1+j];
	i=0;j=0;k=l;
	while(i<n1&&j<n2){
		if(d[i]<=c[j]){
			a[k]=d[i];
			i++;
		}
		else {
			a[k]=c[j];
			j++;
		}
		k++;
	}
	while(i<n1) {
		a[k]=d[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=c[j];
	
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		mergesort(a,0,n-1);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
	
