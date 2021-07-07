#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,sum=0;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2!=0)
            cout<<"NO";
        else
        {
            int s=sum/2;
            int d[s+1]={0}; //a[i]=1-> co the tao ra a[i] tu cac so da cho
            d[0]=1;
            for(int i=0;i<n;i++)
            {
                for(int j=s;j>=a[i];j--)
                {
                    if(d[j-a[i]]==1)    //ton tai mot so
                        d[j]=1;
                }
            }
            if(d[s]==1)
                cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}