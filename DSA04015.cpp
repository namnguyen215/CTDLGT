#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,k,x,x1=INT_MIN;
        bool ok=true;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>k && i==0 && ok)
            {
                cout<<-1<<endl;
                ok=false;
            }
            if(x>k && i>0 && ok)
            {
                cout<<i<<endl;
                ok=false;
            }      
        }
        if(ok==true)
            cout<<n<<endl;
    }
}