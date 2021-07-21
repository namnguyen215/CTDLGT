#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
		string a,b;
		int k;
		cin>>k>>a>>b;
		while(a.size()<b.size()) a="0"+a;
		while(a.size()>b.size()) b="0"+b;
		string res="";
		int nho=0;
		for(int i=a.size()-1;i>=0;i--){
			int add=(a[i]-'0')+(b[i]-'0')+nho;
			res=char(add%k+'0')+res;
			nho=add/k;
		}
		if(nho>0) res=char(nho+'0')+res;
		cout<<res<<endl;
				
    }
}
