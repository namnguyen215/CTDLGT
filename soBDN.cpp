#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;cin>>test;
    while(test--)
    {
        int n;cin>>n;
        queue<long long> q;
        q.push(1);
        while(1)
        {
            long long s=q.front();
            q.pop();
            if(s%n==0 && s>=n)
            {
                cout<<s<<endl;
                break;
            }
            q.push(s*10);
            q.push(s*10+1);          
        }
        cout<<endl;
    }
}