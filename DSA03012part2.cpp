#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin.ignore();
        string s;
        cin>>s;
        int n=s.size();
        int dd[10000]={0},max=0;
        for(int i=0;i<n;i++)
        {
            dd[s[i]]++;
            if(dd[s[i]]>max)
                max=dd[s[i]];
        }
        if(n%2==0 && max*2<=n)
            cout<<1;
        else if(n%2==1 && max<=(n/2+1))
            cout<<1;
        else cout<<-1;
        cout<<endl;
    
    }
}