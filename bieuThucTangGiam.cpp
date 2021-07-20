#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int max=1;
        stack<int> st;
        st.push(max);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='D')
            {
                st.push(++max);
            }
            else{
                while(!st.empty())
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(++max);
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}