#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int a[20][20];
	for(int i=0;i<13;i++)
		for(int j=0;j<13;j++)
			cin>>a[i][j];
	for(int i=0;i<13;i++)
	{
		for(int j=0;j<13;j++)
		{
			cout<<a[i][j];
			if(j<12)
				cout<<",";
		}
		cout<<endl;
	}
}
