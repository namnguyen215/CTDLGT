#include<bits/stdc++.h>
using namespace std;
//xau con doi xung dai nhat
//phuong phap:chon mot vi tri làm trung tam roi xet ra hai been
void longgest_palindromic(string s){
	int maxx1=1;
	int maxx2=1;
	//khoi tao gia tri dai nhat
	int n=s.length();
	
	int right1,left1;
	int right2,left2;
	for(int i=1;i<n;i++){
		//xet xau can tim co do dai chan( even)
		right1=i;
		left1=i-1;
		while(left1>=0&&right1<n&&s[left1]==s[right1]){
			maxx1=max(maxx1,right1-left1+1);
			left1--;
			right1++;
		}
		//xet xau can tim co do dai le(odd)
		right2=i+1;
		left2=i-1;
		while(left2>=0&&right2<n&&s[left2]==s[right2]){
			maxx2=max(maxx2,right2-left2+1);
			left2--;
			right2++;
		}
	}
	cout<<max(maxx1,maxx2)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		longgest_palindromic(s);
		}
	}
			
