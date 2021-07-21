
#include <bits/stdc++.h>
using namespace std;
 
int nthUglyNumber(int n)
{
    if(n==1||n==2||n==3||n==4||n==5) return n;
    set<long long> s;
    s.insert(1);
    n--;
    while(n--){
    	long long x=*s.begin();
    	s.erase(x);
    	s.insert(x*2);
    	s.insert(x*3);
    	s.insert(x*5);
	}
	return *s.begin();
}
 
// Driver Code
int main()
{
   int t;
   cin>>t;
   while(t--){
   		int n;
   		cin>>n;
       cout << nthUglyNumber(n)<<endl;
   }
}
 

