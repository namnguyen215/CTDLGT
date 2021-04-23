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

bool check(string s,int k)
{
    int count=0,res=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            int j=i;
            while(s[j]=='A' && j<s.length()){
                s[j]='@';
                j++;    
            }   
            if(j-i==k)
                res++;  
        }
    }
    if(res==1)  return true;
    return false;
}
int main()
{
        int n,k;cin>>n>>k;
        string s;
        ok=true;
        vector<string> vt;
        s+='@';
        for(int i=1;i<=n;i++)
            s+='A';
        int dem=0;
        while(ok)
        {   
            if(check(s,k))
            {
                string tmp="";
                dem++;
                for(int i=1;i<s.length();i++)
                    tmp+=s[i];
                vt.push_back(tmp);
            }
            sinh(s);
        }
        cout<<dem<<endl;
        for(int i=0;i<vt.size();i++)
            cout<<vt[i]<<endl;
}