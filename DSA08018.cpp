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
        cout<<vt.size()<<endl;
        for(int i=0;i<vt.size();i++)
            cout<<vt[i]<<" ";
        cout<<endl;
    }
}