#include<bits/stdc++.h>
using namespace std;
int Findmax(string s)
{
    int res=0;
    stack<int> st;
    st.push(-1);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
            st.push(i);
        else 
        {
            if(!st.empty())
                st.pop();
            if(!st.empty()) 
                res=max(res,i-st.top());
            else
                st.push(i);
        }
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<Findmax(s)<<endl;
    }
   
}