#include<bits/stdc++.h>
using namespace std;
bool ok=true;
// int count;
// vector<string> vt;
void sinh(string &s)
{
    int i=s.length()-1;
    while(i>0 && s[i]=='1') 
    {
        s[i]='0';
        i--;
    }
       
    if(i==0){
        ok=false;
        return;
    }
    s[i]='1';    
}
bool check(string s)
{
    int len=s.length()-1;
    for(int i=1;i<=len/2;i++)
        if(s[i]!=s[len-i+1])
            return false;
    return true;
}
void print(string s)
{
    if(check(s))
    {
        // count++;
        // vt.push_back(s);    
        for(int i=1;i<s.length();i++)
            cout<<" "<<s[i];
        cout<<endl;
    }

}
int main()
{
        // count=0;
        int n;cin>>n;
        string s;
        ok=true;
        s+='@';
        for(int i=1;i<=n;i++)
            s+='0';
        while(ok)
        {
            print(s);            
            sinh(s);
        }
        // for(int i=0;i<vt.size();i++)
        //     cout<<vt[i];
        // cout<<endl;
}