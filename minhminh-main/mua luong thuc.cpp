#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int u=s/7;
        if(u==0){
            if(m>n) cout<<-1<<endl;
            else{
                int x=(m*s)%n;
                if(x==0) cout<<(m*s)/n<<endl;
                else cout<<(m*s)/n+1<<endl;
            }
        }
        else{
            if(n*6<m*7) cout<<-1<<endl;
            else if (m>n) cout<<-1<<endl;
            else{
                int x=(m*s)%n;
                if(x==0) cout<<(m*s)/n<<endl;
                else cout<<(m*s)/n+1<<endl;
        }
    }
}
}
