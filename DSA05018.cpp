//Xau con chung dai nhat cua s va reverse(s)
#include<bits/stdc++.h>
using namespace std;
int xaucondx(string s)
{
    int len1=1,len2=1,n=s.size();
    int r1,r2,l1,l2;
    for(int i=1;i<n;i++)
    {
        r1=i;l1=i-1;        //Xet xau chan
        while(l1>=0 &&r1<n && s[l1]==s[r1])
        {
            len1=max(len1,r1-l1+1);
            l1--;r1++;
        }
        r2=i+1;l2=i-1;  //xet xau le
        while(l2>=0 &&r2<n && s[l2]==s[r2])
        {
            len2=max(len2,r2-l2+1);
            l2--;r2++;
        }       
    }
    return max(len1,len2);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        cout<<xaucondx(s)<<endl;
    }
}