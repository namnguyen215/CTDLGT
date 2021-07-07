#include<bits/stdc++.h>
using namespace std;
// x1 x2    tu x4 check xem x1 x2 x3 bang 1 0
// x3 x4    Neu bang thi S[i][j] =min(x1,x2,x3)+1=> hinh vuong size 2
int a[500][500],F[500][500];
int main()
{
	int t;cin>>t;
    while(t--)
    {
        int n,m,res=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        for(int i=0;i<m;i++)
            F[0][i]=a[0][i];
        for(int i=0;i<n;i++)
            F[i][0]=a[i][0];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    F[i][j]=min(F[i-1][j],min(F[i-1][j-1],F[i][j-1]))+1;
                    res=max(F[i][j],res);
                }
                else 
                    F[i][j]=0;
            }
        }
        cout<<res<<endl;
    }
}