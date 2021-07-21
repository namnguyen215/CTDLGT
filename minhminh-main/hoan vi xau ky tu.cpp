#include<bits/stdc++.h>
using namespace std;
//hoan vi xau ky tu( dung quay lui)
string s;
int a[100],b[100];

void Try(int i){
	for(int j=0;j<s.length();j++){
		if(b[j]==1){
			a[i]=j;
			b[j]=0;
			if(i==s.length()){
				for(int k=1;k<=s.length();k++)
					cout<<s[a[k]];
				cout<<" ";
			}
			else Try(i+1);
			b[j]=1;
	
}
}
}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		for(int i=0;i<s.length();i++) b[i]=1;
		Try(1);
		cout<<endl;				
	
}
}
