//CON ECH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long n;cin>>n;
        long a[n+7]={0};   //luu so buoc co the nhay den bac i
        a[0]=a[1]=1; //so de len bac 1 chi co 1 cach
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=3;j++)
                if(i>=j)
                    a[i]=a[i]+a[i-j];
        }
        cout<<a[n]<<endl;
    }
}