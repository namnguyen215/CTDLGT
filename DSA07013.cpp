#include<bits/stdc++.h>
using namespace std;
int hauto(string s)
{
    stack<int> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        else
        {
            int s1=st.top();st.pop();
            int s2=st.top();st.pop();
            if(s[i]=='*')
                st.push(s1*s2);
            else if(s[i]=='/')
                st.push(s2/s1);
            else if(s[i]=='+')
                st.push(s1+s2);
            else if(s[i]=='-')
                st.push(s2-s1);
        }
    }
    return st.top();
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        cout<<hauto(s)<<endl;
    }
}