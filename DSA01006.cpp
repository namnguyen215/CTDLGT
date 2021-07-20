#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+7];
        for(int i=1;i<=n;i++)
            a[i]=n-i+1;
        print(a,n);
        while(prev_permutation(a+1,a+n+1)) //Ham sinh hvi sau
        {                                   // next_premutation
            print(a,n);           
        }
        cout<<endl;
    }
}