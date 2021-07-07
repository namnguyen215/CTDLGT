#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0};
vector<long long> vt;
void sangnt()
{
    a[0]=1;a[1]=1;
    for(int i=2;i<1000000;i++)
    {
        if(a[i]==0)
        {
            vt.push_back(i);
            for(int j=i*2;j<1000000;j+=i)
                a[j]=1;  
        }
    }
}
void check(int n)
{
    for(int i=0;i<=sqrt(n);i++)
    {
        if(a[vt[i]]==0 && a[n-vt[i]]==0){
            cout<<vt[i]<<" "<<n-vt[i];
            return;
        } 
    }
    cout<<-1;
}
int main()
{
    sangnt();
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        check(n);
        cout<<endl;
    }
}