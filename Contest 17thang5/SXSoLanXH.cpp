#include<bits/stdc++.h>
using namespace std;
int dd[10000];
struct xh{
    int v,d=0;
};
bool dk(xh x,xh y)
{
    return x.d>y.d;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        memset(dd,0,sizeof(dd));
        int n,k=0;cin>>n;
        int a[n+5];
        xh st[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            dd[a[i]]++;
        }
        for(int i=0;i<=10000;i++)
        {
            if(dd[i]>0)
            {
                st[k].v=i;
                st[k].d=dd[i];
                k++;
            }
        }
        sort(st,st+k,dk);
        for(int i=0;i<k;i++)
            for(int j=0;j<st[i].d;j++)
                cout<<st[i].v<<" ";
        cout<<endl;
    }
}