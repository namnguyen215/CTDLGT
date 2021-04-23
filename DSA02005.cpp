#include<bits/stdc++.h>
using namespace std;
int a[100];
string s;
int chuaxet[100]={0};
void TRY(int i)
{
    for(int j=0;j<s.size();j++)
    {
        if(!chuaxet[j])
        {
            a[i]=j;
            chuaxet[j]=1;
            if(i==s.size())
            {
                for(int k=1;k<=s.size();k++)
                    cout<<s[a[k]];
                cout<<" ";
            }
            else TRY(i+1);
            chuaxet[j]=0;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin.ignore();
        memset(chuaxet,0,sizeof(chuaxet));
        cin>>s;
        sort(s.begin(),s.end());
        TRY(1);
        cout<<endl;
    }
}