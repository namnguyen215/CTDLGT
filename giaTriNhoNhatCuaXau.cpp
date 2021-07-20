#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        int k;
        string s;
        cin>>k>>s;
        int a[1000]={0};
        for(int i=0;i<s.length();i++)
            a[s[i]-'A']++;
        priority_queue<int> pq;
        for(int i=0;i<=30;i++)
        {
            if(a[i]>0)
                pq.push(a[i]);
        }
        while(k--)
        {
            int tmp=pq.top();pq.pop();
            tmp--;
            pq.push(tmp);
        }
        long long res=0;
        while(!pq.empty())
        {
            res+=pow(pq.top(),2);
            pq.pop();
        }
        cout<<res<<endl;
    }
}