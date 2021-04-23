#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
bool ok=true;
void sinh()
{
    int i=k,j,D;                //k la so so tach duoc
    while(i>0 && a[i]==1)   i--;    //Tim phan tu chi so lon nhat khac 1
    if(i==0)
        ok=false;
    else
    {
        a[i]--;
        D=k-i+1;
        k=i;
        if(D/a[i]>0){
            for(int j=i+1;j<=i+D/a[i];j++)
                a[j]=a[i];
            k+=D/a[i];
        }
        if(D%a[i]>0)
        {
            k++;
            a[k]=D%a[i];
        }
    }

}
void print()
{   
    cout<<"(";
    for(int i=1;i<=k;i++)
    {
        cout<<a[i];
        if(i!=k)
            cout<<" ";
    }
        
    cout<<") ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        k=1;a[1]=n;
        ok=true;
        while(ok)
        {
            print();
            sinh();
        }
        cout<<endl;
    }
}