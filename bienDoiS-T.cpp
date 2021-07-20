#include<bits/stdc++.h>
using namespace std;
int convert(int s,int t)
{
    if(s==t)    return 0;
    if(s<0 && t>0)
        return 0;
    if(s>t) return s-t;
    if(t%2==0)  return 1+convert(s,t/2);
    else return 1+convert(s,t+1);
}
int main()
{
    int test;cin>>test;
    while(test--)
    {
        int s,t;
        cin>>s>>t;
        cout<<convert(s,t)<<endl;
    }
}