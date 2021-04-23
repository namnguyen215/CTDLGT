#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x4=0,x7=n/7;
        while(x7>=0)
        {
            if((n-x7*7)%4==0)
            {
                x4=(n-x7*7)/4;
                break;
            }    
            else x7--;
        }
        if(4*x4+7*x7==n)
        {
            for(int i=0;i<x4;i++)
                cout<<'4';
            for(int i=0;i<x7;i++)
                cout<<'7';
            cout<<endl;            
        }
        else
            cout<<"-1"<<endl;
    }
}