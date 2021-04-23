#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        float a,b;
        cin>>a>>b;
        float x=a/b;
        cout<<x<<endl;
        float j=2;
        vector<int> vt;
        while(x>0)
        {
            if(x > 1/j)
            {
                x=x- 1/j;
                cout<<x<<endl;
                vt.push_back(j);
            }
            else j++;
        }
        for(int i=0;i<vt.size();i++)
            cout<<"1/"<<vt[i]<<" + ";
        cout<<endl;
    }
}