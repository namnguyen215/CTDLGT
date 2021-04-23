#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    string s;
    stack<int> st;
    while(t--)
    {     
        cin>>s;
        int n;
        if(s=="PUSH"){
            cin>>n;
            st.push(n);
        }
            
        else if(s=="POP")
        {
            if(st.size()!=0){
                st.pop();
            }
        }
        else if(s=="PRINT")
        {
            if(st.size()==0){
                cout<<"NONE"<<endl;
            }
            else 
                cout<<st.top()<<endl;
        }
    }
}