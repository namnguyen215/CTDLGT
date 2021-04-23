//Đếm số dấu ngoặc đổi chiều
//Đưa vào stack những ngoặc bị sai
//res= (số'('+ số ')')/2 + ngoặc dư(nếu có)
// /2 vì cứ 2 ngoặc đóng(mở) sẽ ghép đc vs nhau để thành ngoặc đúng bằng 1 phép đổi chiều
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()==0 || s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')')
            {
                if(st.top()=='(')
                    st.pop();
                else 
                    st.push(s[i]);
            }
        }
        int dong=0,mo=0;
        while(!st.empty())
        {
            if(st.top()=='(')
                mo++;
            else dong++;
            st.pop();
        }
        cout<<dong/2+mo/2+dong%2+mo%2<<endl;
    }
}