#include<bits/stdc++.h>
using namespace std;

/*b1:xay dung mot vector chua cac chuoi so lap phuong <n
b2:duyet tu chuoi so lon nhat toi chuoi so nho nhat compare voi chuoi da cho
	neu ton tai day con cua chuoi so da cho== chuoi so lap phuong dang xet=>output
*/	  
//xay dung ham chu cac chuoi so lap phuong <n
vector<string> chuoilp(long long n){
	vector<string> v;
	for(long long i;i*i*i<=n;i++){
		long long lp=i*i*i;
		string chuoi;//change number to string
		ostringstream convert;
		convert<<lp;
		chuoi=convert.str();
		v.push_back(chuoi);
	}
	return v;
}
//Find the max stringcube
string findd(string nu,vector<string> string_cube){
	int l=string_cube.size();//so string cube
	for(int i=l-1;i>=0;i--){//xet tu chuoi lon nhat
		int index=0;
		for(int j=0;j<nu.length();j++){
			if(nu[j]==string_cube[i][index]) index++;
			if(index==string_cube[i].length()) return string_cube[i];
			}
		}
	return "-1";
}
//output
void solve(long long n){
	vector<string> v=chuoilp(n);
	string nu;//convert number to string
	ostringstream convert;
	convert<<n;
	nu=convert.str();
	string s=findd(nu,v);
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		solve(n);
	}
}
