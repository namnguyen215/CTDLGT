#include<bits/stdc++.h>
using namespace std;
vector<string> vt;
int a[20][20],n,dd[20][20];
bool check;
void TRY(int i,int j,string s)
{
    if(a[1][1]==0 || a[n][n]==0)
        return;
    if(i==n && j==n && a[i][j])
    {
        vt.push_back(s);
        check=true;
        return;
    }
    if(i<n && a[i+1][j]==1 && dd[i+1][j]==0){
       dd[i][j]=1; 
       TRY(i+1,j,s+"D");
       dd[i][j]=0; 
    }
        
    if(j>1 && a[i][j-1]==1 && dd[i][j-1]==0){
        dd[i][j]=1;
        TRY(i,j-1,s+"L");
        dd[i][j]=0;
    }
        
    if(j<n && a[i][j+1]==1 && dd[i][j+1]==0){
        dd[i][j]=1;
        TRY(i,j+1,s+"R");    
        dd[i][j]=0;
    }
        
    if(i>1 && a[i-1][j]==1 && dd[i-1][j]==0){
        dd[i][j]=1;
        TRY(i-1,j,s+"U");
        dd[i][j]=0;
    }
        
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s=""; 
        vt.clear();check=false;
        cin>>n;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
                dd[i][j]=0;
            }
                
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