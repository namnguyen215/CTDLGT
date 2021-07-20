#include<bits/stdc++.h>
using namespace std;
long findGreater(long a[],int n,int i)
{
	for(int j=i+1;j<n;j++)
		if(a[j]>a[i])
			return j;
	return -1;
}
long findLess(long a[],int n,int x)
{
	for(int j=x+1;j<n;j++)
		if(a[j]<a[x])
			return a[j];
	return -1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		long a[n+1];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			int x=findGreater(a,n,i);
			if(x==-1)
			{
				a[i]=-1;
				cout<<a[i]<<" ";
			}	
			else
				cout<<findLess(a,n,x)<<" ";
		}
		cout<<endl;
	}
}