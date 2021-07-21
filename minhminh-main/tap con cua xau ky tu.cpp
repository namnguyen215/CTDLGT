#include<bits/stdc++.h>
using namespace std;
void solve(set<string>& st, string s){
	if(s.size()==0) return;
	if(st.find(s)==st.end()){
		st.insert(s);
		for(int i=0;i<s.size();i++){
			string t=s;
			t.erase(i,1);
			solve(st,t);
		}
	}
	return;
	}
int main()
{
    int t;cin>>t;
    while(t--)
    {	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	set<string> st;
    	set<string>::iterator it;
    	solve(st,s);
    	for( it=st.begin();it!=st.end();it++)
    		cout<<*it<<" ";
    cout<<endl;
    }
   
}
