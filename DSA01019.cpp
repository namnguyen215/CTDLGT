//HAHA
//H=1,A=0
#include<bits/stdc++.h>
using namespace std;
bool ok=true;
void sinh(string &s)
{
    int i=s.length()-1;
    while(i>0 && s[i]=='H')
    {
        s[i]='A';
        i--;
    }
    if(i==0)
    {
        ok=false;
        return;
    }
    s[i]='H';
}
bool check(string s)
{
    if(s[s.length()-1]=='A' && s[1]=='H')
    {
        for(int i=2;i<s.length()-1;i++)
        {
            if(s[i]=='H' && s[i-1]=='H')
                return false;
        }        
        return true;
    }
    return false;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ok=true;
        int n;cin>>n;
        string s;
        s+='@';
        for(int i=1;i<=n;i++)
            s+='A';
        while(ok)
        {
            if(check(s))
            {
                for(int i=1;i<=n;i++)
                    cout<<s[i];
                cout<<endl;
            }
            sinh(s);
        }
    }
}