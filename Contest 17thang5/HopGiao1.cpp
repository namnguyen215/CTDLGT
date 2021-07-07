#include<bits/stdc++.h>
using namespace std;
int hop[10005];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        memset(hop,0,sizeof(hop));
        int n1,n2;
        cin>>n1>>n2;
        int a1[n1+1],a2[n2+1];
        for(int i=0;i<n1;i++)
        {
            cin>>a1[i];
            hop[a1[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            cin>>a2[i];
            hop[a2[i]]++;
        }
        for(int i=0;i<10000;i++)
            if(hop[i]>0)
                cout<<i<<" ";
        cout<<endl;
        //Giao
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(a1[i]<a2[j])
                i++;
            else if(a1[i]>a2[j])
                j++;
            else{
                cout<<a1[i]<<" ";
                i++;j++;
            }
        }
        cout<<endl;
    }
}