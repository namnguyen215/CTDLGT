#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;cin>>test;
    while(test--)
    {
        int n;cin>>n;
        queue<long long> q;
        q.push(0);
        q.push(9);
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
            q.push(s*10+9);          
        }
        cout<<endl;
    }
}