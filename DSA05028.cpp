//Bien doi xau
#include<bits/stdc++.h>
using namespace std;
int bienDoiXau(string s1,string s2,int n1,int n2)
{
    int L[n1+3][n2+3];
    for(int i=0;i<=n1;i++)   
        L[i][0]=i;
    for(int j=0;j<=n2;j++)
        L[0][j]=j;
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {
            if(s1[i-1]==s2[j-1])
                L[i][j]=L[i-1][j-1];
            else L[i][j]=min(L[i-1][j],min(L[i-1][j-1],L[i][j-1]))+1;
        }
    }
    return L[n1][n2];
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<bienDoiXau(s1,s2,s1.length(),s2.length())<<endl;
    }
}