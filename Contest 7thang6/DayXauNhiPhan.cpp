//Xac dinh ki tu thu k trong xau thu n
//0
//1
//10
//110                   X[n-2]
//10110                 X[n-1]
//110         10110     X[n]
//X[n-2]      X[n-1]
#include<bits/stdc++.h>
using namespace std;
long long F[100];   //Do dai cua xau X
int xuly(long long n,long long k)
{
    if(n==1)    return 0;
    if(n==2)    return 1;
    if(k<=F[n-2])   return xuly(n-2,k); //Tim o cac xau tu X[0] den X[n-2]
    return xuly(n-1,k-F[n-2]);          //Tim o cac xau X[n-1]=>k=k-F[n-2]
}
int main()
{
    int t;cin>>t;
    F[0]=0;F[1]=1;
    for(int i=2;i<=90;i++)
        F[i]=F[i-2]+F[i-1];
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        cout<<xuly(n,k)<<endl;
    }
}