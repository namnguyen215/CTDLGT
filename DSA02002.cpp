#include<bits/stdc++.h>
using namespace std;
int a[20][20],n;
void xuly(int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            a[i][j]=a[i+1][j]+a[i+1][j+1];
    }
}
void print()
{
    for(int i=1;i<=n;i++)    
    {
        cout<<"[";
        for(int j=1;j<=i;j++){
            cout<<a[i][j];
            if(j!=i)
                cout<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[n][i];
        xuly(n);
        print();
    }
} 