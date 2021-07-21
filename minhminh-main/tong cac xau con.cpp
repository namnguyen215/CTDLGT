#include<bits/stdc++.h>
using namespace std;
long long solve(string s){
	int n=s.length();
	long long a[n+3];
	a[0]=s[0]-'0';
	long long sum=a[0];
	for(int i=1;i<n;i++){
		a[i]=(i+1)*(s[i]-'0')+10*a[i-1];
		sum+=a[i];
	}
	return sum;
}
int main()
{
    int t;
	cin>>t;
    while(t--)
    {	string c;
    cin>>c;
    cout<<solve(c)<<endl;
		
    }
}
