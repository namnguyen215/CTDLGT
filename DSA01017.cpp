#include<bits/stdc++.h>
using namespace std;
int a[20]={0},b[20]={0},n;

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
    cout<<endl;
}
int toint(char x){
    return (int) x-'0';
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        n=s.length();
        for(int i=0;i<n;i++)
            a[i+1]=toint(s[i]);
        convert();
        print();
    }
}