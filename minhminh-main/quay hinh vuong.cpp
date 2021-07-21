#include<bits/stdc++.h>
using namespace std;

string change(string s){
	string tmp="";
	for(int i=0;i<s.length();i++) 
		if(s[i]!=32) tmp+=string(1,s[i]);
	return tmp;
}
string hv_left(string s){
	swap(s[0],s[3]);
	swap(s[1],s[4]);
	swap(s[1],s[3]);
	return s;
}
string hv_right(string s){
	swap(s[1],s[4]);
	swap(s[2],s[5]);
	swap(s[2],s[4]);
	return s;
}
struct data{
	string s;//sau khi bien doi
	int dem;//so buoc cien doi
};
void solve(string s1,string s2){
	queue<data> q;
	set<string> se;//su dung de tranh bien doi trung
	int d =0;
	data a={s1,d};
	q.push(a);
	se.insert(s1);
	while(!q.empty()){
		data top=q.front();
		q.pop();
		
		if(top.s==s2){//bien doi thanh hinhf chu nhat dich
			cout<<top.dem<<endl;
			break;
		}
		else{
			string b1=hv_left(top.s);
			string b2=hv_right(top.s);
			if(se.find(b1)==se.end()){
				data x={b1,top.dem+1};
				q.push(x);
				se.insert(b1);
			}
			if(se.find(b2)==se.end()){
				data x={b2,top.dem+1};
				q.push(x);
				se.insert(b2);
			}
		}
	}
	

}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		s1=change(s1);
		s2=change(s2);
	
		solve(s1,s2);
		
	}
}
