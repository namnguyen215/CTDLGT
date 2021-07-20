#include<bits/stdc++.h>
using namespace std;
int sign(char x)
{
    if(x=='^') return 4;
    else if(x=='*' || x=='/')   return 3;
    else if(x=='+' || x=='-')   return 2;
    return 1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')||(s[i]>='a'&&s[i]<='z')) cout<<s[i];
            else if(s[i]=='(')  st.push(s[i]);
            else if(s[i]==')')
            {
                while(!st.empty() && st.top()!='('){
                    cout<<st.top();
                    st.pop();
                }
                st.pop(); //loai not '('
            }
            else //xu ly dau
            {
                while(!st.empty() && sign(s[i])<=sign(st.top())){
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty() && st.top()!='(')
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}