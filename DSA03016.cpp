#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int s,d;
        cin>>s>>d;
        stack<int> st;
        while(s-9>0)
        {
            d--;
            s-=9;
            st.push(9);        
        }
        if(d<0)
            cout<<-1<<endl;
        else 
        {
            if(d==1)
                st.push(s);
            else if(d>1){
                st.push(s-1);    
                d--;  
                while(d>1){
                    st.push(0);
                    d--;                
                }
                st.push(1);  
            }   
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
            cout<<endl;            
        }

    }
}