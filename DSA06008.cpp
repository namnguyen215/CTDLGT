#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n1,n2;cin>>n1>>n2;
        int a[n1+1],b[n2+1];
        for(int i=0;i<n1;i++)
            cin>>a[i];
        for(int i=0;i<n2;i++)
            cin>>b[i];
        int count=0;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(b[j]*log(a[i])>a[i]*log(b[j]))
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
