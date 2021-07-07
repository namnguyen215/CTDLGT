#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x,dem=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==0)
                dem++;
        }
        cout<<dem<<endl;
    }
}