#include<bits/stdc++.h>
using namespace std;
int find(int io[],int n,int x)
{
    for(int i=0;i<n;i++)
        if(x==io[i])
            return i;
    return -1;
}
void postorder(int n,int io[],int po[])
{
    int x=find(io,n,po[0]); //tim vi tri cua root trong io[] (la vi tri dau tiem cua mang po)
    //neu cay con trai khac rong
    if(x!=0)
        postorder(x,io,po+1);
    //Neu cay con phai khac rong
    if(x!=n-1)
        postorder(n-x-1,io+x+1,po+x+1);
    cout<<po[0]<<" ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int io[n],po[n];
        for(int i=0;i<n;i++)
            cin>>io[i];
        for(int i=0;i<n;i++)
            cin>>po[i];
        postorder(n,io,po);
        cout<<endl;
    }
}