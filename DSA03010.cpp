#include<bits/stdc++.h>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int> > pq;
long long FOPT()
{
    long long res=0,first,second;
    while(pq.size()>1)
    {
        first=pq.top(); pq.pop();
        second=pq.top(); pq.pop();
        res+=first+second;
        pq.push(first+second);
    }
    return res;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        int x;
        while(!pq.empty())
            pq.pop();
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        cout<<FOPT()<<endl;
    }
}