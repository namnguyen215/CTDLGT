#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;cin>>x;
    for(int i=0;i<n;i++)
        if(a[i]!=x)
            cout<<a[i]<<" ";
    
}