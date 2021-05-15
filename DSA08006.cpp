#include<bits/stdc++.h>
using namespace std;
bool ok=true;
int n,m,a[100];
long long res;
void TRY(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==m)
        {
            long long s=0;
            for(int k=1;k<=m;k++)
            {
                s=s*10+a[k];
            }
            s*=9;
            if(s%n==0 && s>=n)
            {
                res=min(res,s);
                ok=false;
            }
        }
        else TRY(i+1);
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        m=2;
        res=1e18;
        ok=true;
        while(m<17 && ok)
        {
            TRY(1);
            m++;
        }
        cout<<res<<endl;
    }
}