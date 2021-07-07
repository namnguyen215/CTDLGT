#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int maxx;
    maxx=max(a[0]*a[1],a[n-1]*a[n-2]);
    maxx=max(maxx,a[n-1]*a[n-2]*a[n-3]);
    maxx=max(maxx,a[0]*a[1]*a[n-1]);
    cout<<maxx<<endl;
}
