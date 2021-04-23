#include<bits/stdc++.h>
using namespace std;
bool dk(int x,int y)
{
    return x>y;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k;cin>>k;
        string s;
        cin.ignore();
        cin>>s;
        int f[1000]={0};
        for(int i=0;i<s.length();i++)
            f[s[i]]++;
        vector<int> vt;
        for(int i='A';i<='Z';i++)
            if(f[i]>0)
                vt.push_back(f[i]);
        sort(vt.begin(),vt.end(),dk);
        int j=0;
        while(k--)
        {
            if(vt[j]>0)
                vt[j]--;
            else j++;
            sort(vt.begin(),vt.end(),dk);
        }
        int sum=0;
        for(int i=0;i<vt.size();i++)
            sum+=vt[i]*vt[i];
        cout<<sum<<endl;
    }
}