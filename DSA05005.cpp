//SO BUOC IT NHAT
//Tim day con tang dai nhat=k->cac so da sap xep dung vi tri
//So vi tri can thay doi =n-k
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,fmax,res=0;
        cin >> n;
        int a[n + 1],b[n+1];//mang b luu so phan tu tang dan tinh den i
        for (int i = 0; i < n; i++)
            cin >> a[i];
        b[0]=1;             //phan tu dau tien-> day con tang =1;
        for(int i=1;i<n;i++)
        {
            fmax=0;         
            for(int j=0;j<i;j++)
            {
                if(a[j]<=a[i])
                    fmax=max(b[j],fmax);    
            }
            b[i]=fmax+1;
            res=max(b[i],res);
        }
        cout<<n-res<<endl;
    }
}