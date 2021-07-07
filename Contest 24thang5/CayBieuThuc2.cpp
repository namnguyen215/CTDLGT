#include<bits/stdc++.h>
using namespace std;
int toint(string s)
{
    int res=0;
    for(int i=0;i<s.size();i++)
        res=res*10+(s[i]-'0');
    return res;
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        queue<int> st;
        vector<string> v;
        int n;cin>>n;
        string x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        // for(int i=0;i,v.size();i++)
        //     cout<<v[i]<<" ";
        // cout<<endl;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=="*" || v[i]=="/" || v[i]=="-" || v[i]=="+")
            {
                int s1=st.front();st.pop();
                int s2=st.front();st.pop();
                if(v[i]=="*")
                    st.push(s1*s2);
                else if(v[i]=="/")
                    st.push(s2/s1);
                else if(v[i]=="+")
                    st.push(s1+s2);
                else if(v[i]=="-")
                    st.push(s2-s1);               
            }
            else{
                st.push(toint(v[i]));
            }
        }
        cout<<st.front()<<endl;
    }
}