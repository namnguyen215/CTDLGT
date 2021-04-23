#include<bits/stdc++.h>
using namespace std;
int a[20][20],n;
vector<string> vt;
bool check=false;
void TRY(int i,int j,string s)
{
    if(i==1 && j==1 && a[i][j]==0)
        return;
    if(i==n && j==n && a[i][j]==1)
    {
        check=true;
        vt.push_back(s);
        return;
    }
    if(i<n && a[i+1][j]==1)
        TRY(i+1,j,s+"D");
    if(j<n && a[i][j+1]==1)
        TRY(i,j+1,s+"R");
    

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        vt.clear();
        string s="";
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        TRY(1,1,s);
        if(check==false || vt.size()==0)
            cout<<-1<<endl;
        else 
        {
            for(int i=0;i<vt.size();i++)
                cout<<vt[i]<<" ";
            cout<<endl;    
        }
    }
}