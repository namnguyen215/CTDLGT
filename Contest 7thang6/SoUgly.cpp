#include<bits/stdc++.h>
using namespace std;
int nth(int n)
{
    if(n>=1&&n<=5)
        return n;
    set<long long> s;
    s.insert(1);
    n--;
    while(n)
    {
        long long x=*s.begin();
        s.erase(x);
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
        n--;
    }
    return *s.begin();
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<nth(n)<<endl;
    }
}