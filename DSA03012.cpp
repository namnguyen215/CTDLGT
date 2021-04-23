#include<bits/stdc++.h>
using namespace std;
struct freq{
    char kitu;
    int dem;
};
freq f[100];
bool dk(freq x,freq y)
{
    return x.dem>y.dem;
}
int GAS(string a,int d,int skt)
{
    int i=0;
    char KQ[10000]={0};
    while(i<skt)
    {
        int p=f[i].dem;
        for(int k=0;k<a.length();k++)
        {
            if(KQ[k]==0)
            {
                for(int t=0;t<p;t++)
                {
                    if(k+t*d>a.length())
                        return -1;
                    KQ[k+t*d]=f[i].kitu;
                }
                break;
            }
        }     
        i++;
    }
    for(int j=0;j<a.length();j++)
        cout<<KQ[j]<<" ";
    return 1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin.ignore();
        // int d;cin>>d;
        string a;
        cin>>a;
        int dd[1000];
        memset(dd,0,sizeof(dd));
        for(int i=0;i<a.length();i++){
            dd[a[i]]++;
        }
        int skt=0;
        for(char i='a';i<='z';i++)
        {
            if(dd[i]>0)
            {
                f[skt].kitu=i;
                f[skt].dem=dd[i];
                skt++;
            }
        }
        sort(f,f+skt,dk);
        cout<<GAS(a,2,skt)<<endl;
    }
}