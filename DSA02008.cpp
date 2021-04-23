#include<bits/stdc++.h>
using namespace std;
int n,s,a[100];
int X[100][100];    
bool ok;

vector<vector<int>> res;

void sinh(int a[],int n)
{
    int i=n-1;
    while(i>0 && a[i]>a[i+1])
        i--;
    if(i==0)
    {
        ok=false;
        return;
    }
    else 
    {
        int k=n;
        while(a[k]<a[i]) k--;
        swap(a[k],a[i]);
        sort(a+i+1,a+n+1);
    }
}

int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>X[i][j];
    for(int i=1;i<=n;i++)
            a[i]=i;
    ok=true;
    while(ok)
    { 
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=X[i][a[i]];
        }
        if(sum==s)
        {
            vector<int> vt;
            for(int i=1;i<=n;i++)
                vt.push_back(a[i]);
            res.push_back(vt);
        }        
        sinh(a,n);          
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<" ";
        cout<<endl;        
    }

}

