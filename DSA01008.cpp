#include<bits/stdc++.h>
using namespace std;
bool ok=true;
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
void print(string s,int k)
{
    int count=0;
    for(int i=1;i<s.length();i++)
        if(s[i]=='1')
            count++;
    if(count==k)
    {
        for(int i=1;i<s.length();i++)
            cout<<s[i];
        cout<<endl;        
    }

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;
        ok=true;
        s+='@';
        for(int i=1;i<=n;i++)
            s+='0';
        while(ok)
        {
            print(s,k);            
            sinh(s);
        }
        cout<<endl;
    }
}