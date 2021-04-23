// Kiểm tra có thừa ngoặc hay ko
//Kiểm tra trong dãy ngoặc có biểu thức + - * / hay ko
//Kiểm tra từ dấu ')' đến '(' gần nhất xem có dấu hay ko
// Check đến đâu pop đến đấy
#include<bits/stdc++.h>
using namespace std;
string check(string s)
{
    stack<char> st;
    bool ok=true;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')')
        {
            ok=true;
            char x=st.top();st.pop();
            while(x!='(' && !st.empty()) 
            {
                if(x=='+' || x=='-' || x=='*' || x=='/')
                    ok=false;
                x=st.top();st.pop();
            }
            if(ok)
                return "Yes";
        }
        else st.push(s[i]);
    }
    return "No";
}
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;getline(cin,s);
        cout<<check(s)<<endl;
    }
}