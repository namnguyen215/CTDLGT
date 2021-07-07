//Cho cay dang inorder va preorder, In ra postorder(Trai-phai-goc)
#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *left;
    node *right;
};
int tk(int n,int ino[],int x)
{
    for(int i=0;i<n;i++)
        if(x==ino[i])
            return i;
    return -1;
}
void post(int n,int ino[],int pre[])
{
    int i=tk(n,ino,pre[0]);     //tim Goc(la phan tu dau tien cua pre) trong ino
    if(i!=0)
        post(i,ino,pre+1);
    if(i!=n-1)
        post(n-i-1,ino+i+1,pre+i+1);
    cout<<pre[0]<<" ";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ino[n+7],pre[n+7];
        for(int i=0;i<n;i++)
            cin>>ino[i];
        for(int i=0;i<n;i++)
            cin>>pre[i];
        post(n,ino,pre);
    }
} 