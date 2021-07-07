#include<bits/stdc++.h>
using namespace std;
vector<int> vt;
void xuly(int n)
{
    int a[n];
    a[n-1]=-1;
    stack<int> st; st.push(vt[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        while(!st.empty() && vt[i]>=st.top())
            st.pop();
        if(st.empty())
            a[i]=-1;
        else
            a[i]=st.top();
        st.push(vt[i]);    
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,n;cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vt.push_back(x);
        }
        xuly(n);
        vt.clear();
    }
}