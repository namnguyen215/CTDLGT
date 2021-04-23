#include<bits/stdc++.h>
using namespace std;
int a[20],n,k,check[20];

vector< vector<int>> res;
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        check[i]=j;
        if(i==n)
        {
            int sum=0;
            for(int l=1;l<=n;l++)
            {
                if(check[l])    sum+=a[l];
            }
            if(sum==k)
            {
                vector<int> tmp;
                for(int l=1;l<=n;l++)
                    if(check[l])
                        tmp.push_back(a[l]);
                res.push_back(tmp);
            }
        }
        else Try(i+1);
    }
}
int main()
{
        int sum;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        Try(1);
        if(res.size()==0)
            cout<<-1<<endl;
        else
        {
            // sort(res.begin(),res.end());
            for(int i=0;i<res.size();i++)
            {
                for(int j=0;j<res[i].size();j++)
                {
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
            
        }
        cout<<res.size()<<endl;
}