#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        queue<int> q;
        while(n--)
        {
            int x,a,last;cin>>x;

            switch(x)
            {
                case 1:
                {
                    cout<<q.size()<<endl;
                    break;
                }
                case 2:
                {
                    if(q.empty())
                        cout<<"YES";
                    else
                        cout<<"NO";
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    cin>>a;
                    q.push(a);
                    last=a;
                    break;
                }
                case 4:
                {
                    if(!q.empty())  
                        q.pop();
                    break;
                }
                case 5:
                {
                    if(!q.empty())
                        cout<<q.front()<<endl;
                    else
                        cout<<-1<<endl;
                    break;
                }
                case 6:
                {
                    if(!q.empty())
                        cout<<last<<endl;
                    else 
                        cout<<-1<<endl;
                    break;
                }
            }
        }
    }
}