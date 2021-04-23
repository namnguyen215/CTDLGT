#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long m,n,k,x;
        vector<long> vt;
        cin>>m>>n>>k;
        for(int i=0;i<m+n;i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        sort(vt.begin(),vt.end());
        cout<<vt[k-1]<<endl;
    }
    

}