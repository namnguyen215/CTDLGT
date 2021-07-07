#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        if(s[0]=='0')
        {
            cout<<"0"<<endl;
        }
        else 
        {
            int a[n+1]; // a[i] la so cach ma hoa den ki tu i 
            a[0]=1;a[1]=1;  // so cach ma hoa den ki tu 0 la 1
            for(int i=2;i<=n;i++)
            {
                a[i]=0;
                if(s[i-1]>'0') 
                    a[i]=a[i-1];
                if(s[i-2] =='1' || (s[i-2]=='2' && s[i-1]<='6')) // s[i-2]=1=>s[i-1]=0->9
                    a[i]+=a[i-2];                                // s[i-2]=2=>s[i-1]=0->6 
            }
            cout<<a[n]<<endl;
        }
    }
}