#include<bits/stdc++.h>
using namespace std;
int a[20][20],n;
void xuly(int n)
{
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
            a[i][j]=a[i-1][j]+a[i-1][j+1];
    }
}
void print()
{
    for(int i=1;i<=n;i++)    
    {
        cout<<"[";
        for(int j=1;j<=n-i+1;j++){
            cout<<a[i][j];
            if(j!=n-i+1)
                cout<<" ";
        }
        cout<<"]"<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[1][i];
        xuly(n);
        print();
    }
} 