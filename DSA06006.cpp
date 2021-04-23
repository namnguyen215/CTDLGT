#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n;cin>>n;
        int *p=new int[n];
        for(long i=0;i<n;i++)
            cin>>*(p+i);
        sort(p,p+n);
        for(long i=0;i<n;i++)
        cout<<*(p+i)<<" ";
        cout<<endl;
        delete p;
    }
}