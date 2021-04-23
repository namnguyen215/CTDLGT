#include<bits/stdc++.h>
using namespace std;
int n, a[20],cot[40],xuoi[40],nguoc[40],dem;
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1])
        {
            a[i]=j;
            cot[j]=0; xuoi[i-j+n]=0; nguoc[i+j-1]=0;
            if(i==n){
                dem++;
            }   
            else
                Try(i+1);
            cot[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        dem=0;
        cin>>n;
        for(int i=1;i<=2*n-1;i++)
        {
            cot[i]=1;xuoi[i]=1;nguoc[i]=1;
        }
        Try(1);
        cout<<dem<<endl;
    }
}