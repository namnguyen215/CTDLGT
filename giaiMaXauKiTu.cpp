#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       stack<int> nu;
       stack<char> st;
       string r="";
       for(int i=0;i<s.length();i++){
       		if(s[i]=='['){
       			if(s[i-1]>='0'&&s[i-1]<='9') st.push(s[i]);
       			else{
       				nu.push(1);
       				st.push(s[i]);
				   }
			   }
			else if(s[i]>='0'&&s[i]<='9'){
				int tmp=0;
				while(s[i]>='0'&&s[i]<='9'){
					tmp=tmp*10+s[i]-'0';
					i++;
				}
				i--;
				nu.push(tmp);
				}
			else if(s[i]==']'){
				int x;
				if(!nu.empty()){
				 x=nu.top();
					nu.pop();
				}
				string tmp="";
				while(!st.empty()&&st.top()!='['){
					tmp=st.top()+tmp;
					st.pop();
				}
				if(!st.empty()&&st.top()=='[') st.pop();
			
				for(int k=1;k<=x;k++) r=r+tmp;
				for(int j=0;j<r.length();j++)
					st.push(r[j]);
				r="";
				
			
			}
			else st.push(s[i]);
			}
			while(!st.empty()){
				r=st.top()+r;
				st.pop();
			}
			cout<<r<<endl;
			}
	   
    
}