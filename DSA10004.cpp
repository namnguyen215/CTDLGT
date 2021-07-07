//Euler
//Ton tai chu trinh neu tat ca cac dinh deu co bac chan
//Ton tai duong di Euler neu co 2 dinh bac le
#include<bits/stdc++.h>
using namespace std;
int check(int a[],int v)
{
    int odd=0,even=0;
    for(int i=1;i<=v;i++)
    {
        if(a[i]%2==1)
            odd++;
        else if(a[i]==0)    
            return 0;
    }
    if(odd==0)
        return 2;
    if(odd==2)
        return 1;
    return 0;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a[1007]={0};
        int v,e,v1,v2;
        cin>>v>>e;
        for(int i=1;i<=e;i++)
        {
            cin>>v1>>v2;
            a[v1]++;
            a[v2]++;
        }
        cout<<check(a,v)<<endl;
    }
}