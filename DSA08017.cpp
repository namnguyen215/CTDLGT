#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s="";
        queue<string> q;
        vector<string> vt;
        q.push("6");
        q.push("8");
        while(s.length()<=n)
        {
            s=q.front();
            q.pop();
            if(s.length()<=n)
                vt.push_back(s);
            q.push(s+'6');
            q.push(s+'8');
        } 
        for(int i=vt.size()-1;i>=0;i--)
            cout<<vt[i]<<" ";
        cout<<endl;
    }
}