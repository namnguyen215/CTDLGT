#include<bits/stdc++.h>
using namespace std;
struct cv{
    int jid,dl,pf;
};
bool dk(cv x, cv y)
{
    return x.pf>y.pf;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cv job[n+1];
        for(int i=0;i<n;i++)
            cin>>job[i].jid>>job[i].dl>>job[i].pf;
        sort(job,job+n,dk);
        int dem=0,res=0;
        int dd[1000]={0};
        for(int i=0;i<n;i++)
        {
            while(dd[job[i].dl] && job[i].dl>0)
                job[i].dl--;
            if(dd[job[i].dl]==0 && job[i].dl>0)
            {
                dd[job[i].dl]=1;
                dem++;
                res+=job[i].pf;
            }
        }
        cout<<dem<<" "<<res<<endl;
    }
}