#include<bits/stdc++.h>
using namespace std;
string check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i] && a[i]!=b[n-i+1])
            return "No";
    }
    return "Yes";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+7],b[n+7];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b+1,b+n+1);    
        cout<<check(a,b,n)<<endl;
    }
}