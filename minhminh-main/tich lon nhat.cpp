#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int a[n+3];
	vector<int> va,vd;
	va.clear();
	vd.clear();
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]<0) va.push_back(a[i]);
		else vd.push_back(a[i]);
	}
	sort(va.begin(),va.end());
	sort(vd.begin(),vd.end());
	long long m2,m3;
	if(vd.size()>=2&&va.size()<=1) m2=vd[vd.size()-1]*vd[vd.size()-2];
	else if(vd.size()<=1&&va.size()>=2) m2=va[0]*va[1];
	else if(va.size()>=2&&vd.size()>=2) m2=max(vd[vd.size()-1]*vd[vd.size()-2],va[0]*va[1]);
	
	if(vd.size()>=3&&va.size()<=1) m3=vd[vd.size()-1]*vd[vd.size()-2]*vd[vd.size()-3];
	else if(vd.size()==0&& va.size()>=3) m3=va[va.size()-1]*va[va.size()-2]*va[va.size()-3];
	else if((vd.size()==1||vd.size()==2)&&va.size()>=2) m3=va[0]*va[1]*vd[vd.size()-1];
	else if(vd.size()==2&&va.size()==1) m3=va[0]*vd[1]*vd[0];
	else if(vd.size()>=3&&va.size()>=3) m3=vd[vd.size()-1]*max(vd[vd.size()-2]*vd[vd.size()-3],va[0]*va[1]);
	cout<<max(m2,m3)<<endl;
	}	
		


