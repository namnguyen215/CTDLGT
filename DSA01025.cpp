#include<bits/stdc++.h>
using namespace std;
bool ok;
void sinh(string &s,int n,int k)
{
    int i=k-1;
    while(i>=0 && s[i]=='A'+n-k+i)
    {
        i--;
    }
    if(i<0)
        ok=false;
    else{
        s[i]++;
        for(int j=i+1;j<k;j++)
            s[j]=s[i]+j-i;
    }

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ok=true;
        int n,k;
        cin>>n>>k;
        string s;
        for(char i='A';i<'A'+k;i++)
            s+=i;
        while(ok)
        {
            cout<<s<<endl;
            sinh(s,n,k);
        }
    }
}