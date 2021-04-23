#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<int> st;
    while(true)
    {     
        cin>>s;
        int n;
        if(s=="push"){
            cin>>n;
            st.push(n);
        }
            
        else if(s=="pop")
        {
            if(st.size()==0){
                cout<<"empty"<<endl;
                break;
            }
                
            else 
                st.pop();
        }
        else if(s=="show")
        {
            if(st.size()==0){
                cout<<"empty"<<endl;
                break;
            }
            int n=st.size();
            int a[n],i=n-1;            
            while(st.size()>0)
            {
                a[i--]=st.top();
                st.pop();
            }            
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";   
                st.push(a[i]);
            }               
            cout<<endl;
        }
    }
}