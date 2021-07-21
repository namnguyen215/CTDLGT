#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d=0;
        stack<int> st;
      
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||st.empty()) st.push(s[i]);
            else{
                
               if(st.top()=='('){
               		d=d+2;
               		st.pop();
               	}
                else st.push(s[i]);
            }
        }
        cout<<d<<endl;
    }
}
