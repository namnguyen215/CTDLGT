#include<bits/stdc++.h>
using namespace std;
int a[20]={0},b[20]={0},n;
bool stop=true;
void sinh()
{
    int i=n;
    while(a[i]){
        a[i]=0;
        i--;
    }
    if(i==0){
        stop=false;
        return;
    }
    else a[i]=1;
}
void convert()
{
    int tmp;
    b[1]=a[1];
    for(int i=2;i<=n;i++){
        tmp=a[i]+a[i-1];
        if(tmp==2)
            b[i]=0;
        else b[i]=tmp;
    }
}
void print()
{
    for(int i=1;i<=n;i++)
        cout<<b[i];
    cout<<" ";
}
int main(){
    int t;cin>>t;
    while(t--)
    {
        stop=true;
        cin>>n;
        while(stop){
            print();
            sinh();
            convert();
        }
        cout<<endl;
    }
}