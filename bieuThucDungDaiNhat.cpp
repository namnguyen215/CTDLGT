    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;cin>>t;
        while(t--)
        {
            string s;cin>>s;
            stack<char> st;
            int dem=0;
            for(int i=0;i<s.length();i++)
            {
                if(st.empty())
                    st.push(s[i]);
                else if(st.top()=='(' && s[i]==')'){
                    st.pop();
                    dem++;
                }
                else{
                    st.push(s[i]);
                }
            }
            cout<<dem*2<<endl;
        }
    }