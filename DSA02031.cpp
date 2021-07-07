#include<bits/stdc++.h>
using namespace std;
bool ok=true;
void sinh(string s1,string &s2,int n)
{
    int i=n-1;
    while(i>=0 && s2[i]==i+'0') i--;
    if(i<0)
    {
        s2.clear();
        for(int i=1;i<=n;i++)
            s2+=i+'1';
        
    }
    else {
        s2[i]++;
    }  

}
void sinhhv(string s1,string s2)
{
    int i=s.length()-2;
    while(i>0 && s1[i]>s1[i+1])
        i--;
    if(i==0)
    {
        ok=false;
        return;
    }
    else 
    {
        int k=s1.length()-1;
        while(s1[k]<s1[i])
            k--;
        swap(s1[k],s1[i]);
        sort(s1.begin(),s1.end());
        sinh(s1,s2,s1.length());
    }
}
int main()
{
    int n;cin>>n;
    string s1=" ",s2=" ";
    for(int i=0;i<n;i++)
        s1+=i+'A';
    for(int i=1;i<=n;i++)
    {
        s2+=i+'1';
    }
    while(ok)
    {
        sinhhv(s1,s2);
    }
}