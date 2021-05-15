#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n1,n2;
        cin>>n1>>n2;
        long long min=1e8+9,max=-1e8-9;
        long long a1[n1+1],a2[n2+1];
        for(long i=0;i<n1;i++)
        {
            cin>>a1[i];
            if(a1[i]>max)
                max=a1[i];
        }
        for(long i=0;i<n2;i++)
        {
            cin>>a2[i];
            if(a2[i]<min)
                min=a2[i];
        }      
        cout<<max*min<<endl;  
    }
}