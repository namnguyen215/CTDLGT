#include<bits/stdc++.h>
using namespace std;
int main()
{
    int menhgia[10]={1000,500,200,100,50,20,10,5,2,1};
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int i=0,dem=0;
        while(n)
        {
            if(n-menhgia[i]>=0)
            {
                dem++;
                n=n-menhgia[i];
            }
            else i++;
        }
        cout<<dem<<endl;
    }
}