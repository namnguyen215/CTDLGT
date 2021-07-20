#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long a[n+1];
        vector<int> vt;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vt.push_back(a[i]);
        }
        stack<int> st;
        st.push(vt[n-1]);
        a[n-1]=-1;
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
}