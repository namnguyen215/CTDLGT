#include<bits/stdc++.h>
using namespace std;
bool ok=true;
void print(string s);
void sinh(string &s)
{
    int i=s.length()-1;
    while(i>0 && s[i]=='B') 
    {
        s[i]='A';
        i--;
    }
       
    if(i==0){
        ok=false;
        return;
    }
    s[i]='B';    
        
}
void print(string s)
{
    for(int i=1;i<s.length();i++)
        cout<<s[i];
    cout<<" ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        ok=true;
        s+='@';
        for(int i=1;i<=n;i++)
            s+='A';
        while(ok)
        {
            print(s);            
            sinh(s);
        }
        cout<<endl;
    }
}