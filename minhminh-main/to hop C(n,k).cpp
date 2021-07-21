#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
long long a[1006][1006];
/*C(n,k)+C(n,k+1)=C(n+1,k+1)
    0 1 2 3 4 5

1   1 1
2   1 2 1
3   1 3 3 1
4   1 4 6 4 1
5
    a[n][k]=C(n,k)   */
int main(){
    int i,j,t;
    cin>>t;

    for(i=1;i<=1000;i++){
        for(j=0;j<=i;j++){
            if(i==j||j==0) a[i][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
           a[i][j]%=m;
        }
    }
    while(t--){
        int n,r;
        cin>>n>>r;
        cout<<a[n][r]<<endl;
    }
}
