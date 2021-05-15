#include<bits/stdc++.h>
using namespace std;
long dem(int n1,int n2,int a[],int b[])
{
    int count=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            float x,y;
            x=float(log(a[i]))/ float(a[i]);
            y=float(log(b[j]))/ float(b[j]);
            if(x>y)
                count++;
            // else{
            //     return count;
            // }
        }
    } 
    return count;   
}
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
        cout<<dem(n1,n2,a,b)<<endl;
    }
}