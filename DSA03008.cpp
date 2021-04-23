//Bai toan sap xep cong viec
#include<bits/stdc++.h>
using namespace std;
struct tg{              //Tao mot struct luu thoi gian bat dau va ket thuc
    int s,f;            //cua moi cong viec
};
bool dk(tg a,tg b)
{
    return a.f<b.f;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        tg X[1007];
        int n;cin>>n;
        for(int i=0;i<n;i++)
            cin>>X[i].s;
        for(int i=0;i<n;i++)
            cin>>X[i].f;
        sort(X,X+n,dk);         //Sap xep theo tang dan thoi gian ket thuc
        int d=1,i=0;            //Chon hanh dong ket thuc dau tien lam phuong an toi uu
        for(int j=1;j<n;j++)
        {
            if(X[j].s>=X[i].f)     //thoi gian bat dau cua hoat dong sau> thoi gian ket thuc hoat dong truoc
            {
                d++;                //Neu thoa man dieu kien thi tang bien dem(so hanh dong)
                i=j;                //Dat thoi gian bat dau bang thoi gian ket thuc cua hoat dong truoc
            }
        }
        cout<<d<<endl;
    }
}