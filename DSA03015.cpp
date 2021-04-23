#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        if(s*m>(s-s/7)*n)
            cout<<-1;
        else{
            int i=1;
            while(n*i<s*m)
                i++;
            cout<<i;
        }
        cout<<endl;
    }
}