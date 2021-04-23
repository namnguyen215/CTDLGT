#include<bits/stdc++.h>
using namespace std;
string check(int a[],int n)
{
    int left=0,right=0;
    for(int i=0;i<n;i++)
        left+=a[i];
    for(int i=n-1;i>=0;i--)
    {
        right+=a[i];
        left-=a[i];
        cout<<left<<" "<<right<<endl;
        if(left==right)
            return "YES";
    }
    return "NO";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<check(a,n)<<endl;
    }
}