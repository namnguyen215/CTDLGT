//n1+n2+...nk=n => Co the chon ra Ckn bo so
// Cong tong cac bo so => 2^(n-1) bo
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll m=123456789;
long long mu(ll n)
{
    if(n==0) return 1;
    if(n==1) return 2;
    ll x=mu(n/2);
    if(n%2==0)  
        return (x%m *x%m)%m;
    else 
        return 2*(x%m *x%m)%m;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        cout<<mu(n-1)<<endl;
    }
}