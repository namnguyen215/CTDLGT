//Tim so cap (x,y) ma x^y>y^x
//y>x thi x^y>y^x tru cac truong hop y=0,1,2,3,4;

#include<bits/stdc++.h>
using namespace std;
int demcap(int x[],int y[],int n1, int n2 )
{
    int res=0;
    int demy[5]={0};
    for(int i=0;i<n;i++)
        if(y[i]<5)
            dem[y[i]]++;
    sort(y,y+n2);
    
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n1,n2;cin>>n1>>n2;
        int x[n1+1],y[n2+1];
        for(int i=0;i<n1;i++)
            cin>>x[i];
        for(int i=0;i<n2;i++)
            cin>>y[i];
        cout<<demcap(x,y,n1,n2)<<endl;
    }
}
