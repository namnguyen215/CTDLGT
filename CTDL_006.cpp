#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    int b[10000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(b[a[i]]==0)
            cout<<a[i]<<" ";
        b[a[i]]++;
    }
        
    
}