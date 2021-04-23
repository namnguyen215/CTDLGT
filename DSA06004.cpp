#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        int a1[n1],a2[n2];
        vector<int> hop;
        for(int i=0;i<n1;i++){
            cin>>a1[i];
            hop.push_back(a1[i]);
        }
      
        for(int i=0;i<n2;i++){
            cin>>a2[i];
            hop.push_back(a2[i]);
        }
        sort(hop.begin(),hop.end());
        hop.push_back(-1);
        for(int i=0;i<hop.size()-1;i++)
        {
            if(hop[i]!=hop[i+1])
                cout<<hop[i]<<" ";
        }
        cout<<endl;
        int i=0,j=0;
        sort(a1,a1+n1);
        sort(a2,a2+n2);
        while(i<n1&&j<n2)
        {
            if(a1[i]<a2[j])
                i++;
            else if(a1[i]>a2[j])
                j++;
            else{
                cout<<a1[i]<<" ";
                i++;j++;
            }
        }
        cout<<endl;
    }
}