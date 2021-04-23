#include<bits/stdc++.h>
using namespace std;
bool last=false;
int k,a[100],n;
int tox(char x)
{
    return (int) x-'0';
}
void sinh(string s)
{
    n=s.length();
    for(int i=1;i<=n;i++)
        a[i]=tox(s[i-1]);
    int i=n-1;
    while(i>0 && a[i]>=a[i+1])
        i--;
    if(i==0)
    {
        last=true;
        return;
    }
    else 
    {
        int k=n;
        while(a[k]<=a[i]) k--;
        swap(a[k],a[i]);
        sort(a+i+1,a+n+1);
    }
}

void print(int a[],int n)
{
    cout<<k<<" ";
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
    
int main()
{
    int t;cin>>t;
    while(t--)
    {
        last=false;
        cin>>k;
        cin.ignore();
        string s;
        cin>>s;
        sinh(s);
        if(last==true)
            cout<<k<<" "<<"BIGGEST"<<endl;
        else 
            print(a,n);
    }
}