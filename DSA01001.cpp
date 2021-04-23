#include<bits/stdc++.h>
using namespace std;
void sinh(string &s)
{
    int i=s.length()-1;
    while(i>=0 && s[i]=='1') 
    {
        s[i]='0';
        i--;
    }
    if(i>0)
        s[i]='1';
}
void print(string s)
{
    for(int i=0;i<s.length();i++)
        cout<<s[i];
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        sinh(s);
        print(s);
    }
}