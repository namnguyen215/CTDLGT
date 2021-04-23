//Duyệt từ cuối lên đầu 
//gặp operator thì push vào sau string tmp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<string> st;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            {
                string s1=st.top();st.pop();
                string s2=st.top();st.pop();
                string tmp=s1+s2+s[i];
                st.push(tmp);                
            }
            else{
                string tg="";tg+=s[i];
                st.push(tg);
            }            
        }
        cout<<st.top()<<endl;
    }
}