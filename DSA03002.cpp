#include<bits/stdc++.h>
using namespace std;
long long toint(string a)
{
    long long res=0;
    for(int i=0;i<a.length();i++)
        res=res*10+((int)a[i]-'0');
    return res;
}
long long inmin(string a,string b)
{
    for(int i=0;i<a.length();i++)
        if(a[i]=='6')
            a[i]='5';
    for(int i=0;i<b.length();i++)
        if(b[i]=='6')
            b[i]='5';
    return toint(a)+toint(b);
}
long long inmax(string a,string b)
{
    for(int i=0;i<a.length();i++)
        if(a[i]=='5')
            a[i]='6';
    for(int i=0;i<b.length();i++)
        if(b[i]=='5')
            b[i]='6';
    return toint(a)+toint (b);
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<inmin(a,b)<<" "<<inmax(a,b)<<endl;
}