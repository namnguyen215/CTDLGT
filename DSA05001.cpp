//XÂU CON CHUNG DÀI NHẤT
// Dùng mảng a[i][j] lưu số phần tử chung của 2 xâu 
// từ s1[0]->s1[i] & từ s2[0]->s2[j]
#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        cin.ignore();
        string s1,s2;
        cin>>s1>>s2;
        s1='0'+s1;
        s2='0'+s2;
        int res=0;
        for(int i=1;i<s1.size();i++)
        {
            for(int j=1;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                    a[i][j]=a[i-1][j-1]+1;
                else 
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                if(a[i][j]>res)
                    res=a[i][j];
            }
        }
        cout<<res<<endl;
    }
}