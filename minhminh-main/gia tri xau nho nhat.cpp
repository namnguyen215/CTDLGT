#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k>>s;
        int n=s.length();
       
            int b[30]={0};
            for(int i=0;i<n;i++) b[s[i]-65]++;
            priority_queue<int> q;
            for(int i=0;i<=26;i++) 
            if(b[i] )
                q.push(b[i]);
            while(k--){
                int c=q.top();
                q.pop();
                c=c-1;
                q.push(c);
            }
            long long r=0;
            while(!q.empty()){
                 int temp = q.top();
                r=r+pow(temp,2);
                q.pop();
            }
            cout<<r<<endl;
            
        }
    }
