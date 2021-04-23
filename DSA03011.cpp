#include<bits/stdc++.h>
using namespace std;
long long n;
int m=1000000007;
priority_queue<long long, vector<long long>, greater<long long> > pq;
long long FOPT()
{
    long long res=0,first,second;
    while(pq.size()>1)
    {
        first=pq.top(); pq.pop();
        second=pq.top(); pq.pop();
        res+=(first%m+second%m)%m;
        pq.push(first%m+second%m);
    }
    return res%m;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        long long x;
        while(!pq.empty())
            pq.pop();
        for(long long i=1;i<=n;i++)
        {
            cin>>x;
            pq.push(x%m);
        }
        cout<<FOPT()<<endl;
    }
}