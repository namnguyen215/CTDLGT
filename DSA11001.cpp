#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<string> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/')
            {
                string s1=st.top();st.pop();
                string s2=st.top();st.pop();
                string s0=s2 + s[i] + s1;
                st.push(s0); 
            }
            else
            {
                string tg=""; tg+=s[i];
                st.push(tg);
            }
        }
        cout<<st.top()<<endl;
    }

}