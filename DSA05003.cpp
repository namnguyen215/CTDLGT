//Tim day con chung dai nhat cua 3 xau
#include<bits/stdc++.h>
using namespace std;
int findLCS(string s1,string s2,string s3,int n1,int n2,int n3)
{
    int L[n1+1][n2+1][n3+1];    //Do dai xau con chung dai nhat tinh den i cua s1,j cua s2 va k cua s3;
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            for(int k=0;k<=n3;k++)
            {
                if(i==0 || j==0 ||k==0)
                    L[i][j][k]=0;
                else if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1])
                    L[i][j][k]=L[i-1][j-1][k-1]+1;
                else
                {
                    L[i][j][k]=max(L[i-1][j][k],max(L[i][j-1][k],L[i][j][k-1]));
                }
            }
        }
    }
    return L[n1][n2][n3];
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        cout<<findLCS(s1,s2,s3,n1,n2,n3)<<endl;
    }
}