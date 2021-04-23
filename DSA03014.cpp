#include<bits/stdc++.h>
using namespace std;
string s;
int a[100],n;
bool ok;
vector<long long> vt;
void sinh()
{
    int i=n;
    while(i>0 && a[i])
    {
        a[i]=0;
        i--;
    }
    if(i==0)
    {
        ok=false;
        return;
    }
    a[i]=1;
}
bool lp(long long res)
{
    if(cbrt(res)*cbrt(res)*cbrt(res)==res && res)
        return true;
    return false;
}
void check()
{
    long long res=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            res=res*10+(((long long)s[i-1]-'0'));
        }
    }
    if(lp(res))
        vt.push_back(res);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        ok=true; vt.clear();
        memset(a,0,sizeof(a));
        while(ok)
        {
            sinh();
            check();
        }
        if(vt.size()>0)
        {
            sort(vt.begin(),vt.end());
            cout<<vt[vt.size()-1]<<endl;
        }
        else
            cout<<-1<<endl;
    }
}