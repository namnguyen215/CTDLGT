#include<bits/stdc++.h>
using namespace std;
int dd[10000];
struct times{
    int value;
    int dem;
};
bool dk(times x,times y)
{
    if(x.dem == y.dem)
        return x.value<y.value;
    return x.dem>y.dem;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k=0;cin>>n;
        times st[n+1];
        int a[1000];
        memset(dd,0,sizeof(dd));
        for(int i=0;i<n;i++){
            cin>>a[i];
            dd[a[i]]++;
        }
        for(int i=0;i<=10000;i++)
        {
            if(dd[i]>0)
            {
                st[k].value=i;
                st[k].dem=dd[i];
                k++;
            }
        }
        sort(st,st+k,dk);
        for(int i=0;i<k;i++)
            for(int j=0;j<st[i].dem;j++)
                cout<<st[i].value<<" ";
        cout<<endl;
    }
}