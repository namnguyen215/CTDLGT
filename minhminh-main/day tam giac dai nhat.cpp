#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
    while(t--)
    {	int n;
    	cin>>n;
    	int a[n+2];
    	for(int i=0;i<n;i++) cin>>a[i];
    	int in[n+4],de[n+4];
    	in[0]=1;
    	de[n-1]=1;
    	for(int i=0;i<n;i++){
    		int dem=1;
    		for(int j=i-1;j>=0;j--){
    			if(a[j]<a[j+1]) dem++;
    			else break;
    		}
    		in[i]=dem;
    	
		}
		for(int i=n-2;i>=0;i--){
			int dem=1;
			for(int j=i+1;j<n;j++){
				if(a[j-1]>a[j]) dem++;
				else break;
			}
			de[i]=dem;
		}
		int s=0;
		for(int i=0;i<n;i++) s=max(s,in[i]+de[i]-1);
		cout<<s<<endl;
		
    }
}
