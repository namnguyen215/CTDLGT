//Duyệt từ cuối lên đầu, nếu gặp + - * / thì cho vào giữa hai phần tử đã push
// vào stack dưới dạng 2 string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        stack<string> st;
        string s;cin>>s;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                string s1=st.top();st.pop();
                string s2=st.top();st.pop();
                string tmp='('+s1+s[i]+s2+')';
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