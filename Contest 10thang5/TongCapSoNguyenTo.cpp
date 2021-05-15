#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    int dem=0;
	for(int i=0;i<n-1;i++)
	{
	    int k = 0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                dem++;
			k = 1;
			}
		}
		if(k == 0) break;
		else{
            cout<<"Buoc "<<i+1<<": ";
            for(int k=0;k<n;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
		}
	}
    cout<<dem<<endl;
	return 0;
}