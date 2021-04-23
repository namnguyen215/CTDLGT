#include<bits/stdc++.h>
using namespace std;
int main()
{

        int v,v1,v2;
        cin>>v;
        cin.ignore();
        string s;
        vector<int> vt[55];
        for(int i=1;i<=v;i++)
        {
            getline(cin,s);
            s+=" ";
            int tmp=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]>='0' && s[j]<='9')
                    tmp=tmp*10 + (int)(s[j]-'0');
                else if(tmp>0){
                    vt[i].push_back(tmp);
                    tmp=0;
                }
            }
        }
        for(int i=1;i<=v;i++)
        {
            for(int j=0;j<vt[i].size();j++)
                if(vt[i][j]>i)
                    cout<<i<<" "<<vt[i][j]<<endl;
        }
}