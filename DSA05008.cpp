//Day con co tong bang s
//L[s]==1 ==> co the tao ra tong s tu a1...ai
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,n,s;cin>>n>>s;
        int L[40007]={0};
        L[0]=1;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            for(int j=s;j>=x;j--)
                if(L[j-x]==1 && L[j]==0)       //L[j]==1 <=> L[j-a[i]]==1:  L[x]=1     
                    L[j]=1;                    //                           L[j-x]=1
        }                                      //                        ==>L[j]=1
        if(L[s]==1)
            cout<<"YES";
        else 
            cout<<"NO";
        cout<<endl;
    }
}