#include<bits/stdc++.h>
using namespace std;
int tox(char x)
{
    return (int)x -'0';
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        int a[10]={0};
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int i=0;i<s.length();i++)
            {
                a[tox(s[i])]++;
            }
        }
        for(int i=0;i<=9;i++)
        {
            if(a[i]>0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}