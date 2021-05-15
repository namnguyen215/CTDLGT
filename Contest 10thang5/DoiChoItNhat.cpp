#include<bits/stdc++.h>
using namespace std;
int Ssort(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        if(min!=i)
        {
            swap(a[min],a[i]);
            dem++;
        }
    }
    return dem;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<Ssort(a,n)<<endl;
    }
}