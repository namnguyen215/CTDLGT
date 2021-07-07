#include<bits/stdc++.h>
using namespace std;
bool dk(long long x,long long y)
{
    return x>y;
}
int main()
{
    int n;cin>>n;
    long long x;
    vector<long long> chan;
    vector<long long> le;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(i%2==0)
            chan.push_back(x);
        else
            le.push_back(x);
    }
    sort(chan.begin(),chan.end(),dk);
    sort(le.begin(),le.end());
    for(int i=0;i<chan.size();i++)
        cout<<le[i]<<" "<<chan[i]<<" ";
    if(le.size()>chan.size())
        cout<<le[le.size()-1];
    cout<<endl;
}