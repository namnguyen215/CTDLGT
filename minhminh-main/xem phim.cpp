#include<iostream>
using namespace std;
#include<stdio.h>


int weight[103];
int C[102][25001];

void knapsack(int n,int W)
{
for(int i=1;i<=n;i++)
for(int c=0;c<=W;c++) C[i][c]=0;

 
for(int i=1;i<=n;i++){
	  for(int w=1;w<=W;w++)
		  if(weight[i]<=w){						  
			 C[i][w]=max(weight[i]+C[i-1][w-weight[i]],C[i-1][w]);
		}
	else
		C[i][w]=C[i-1][w];			
}
	cout<<C[n][W];

}
int main(){
	int n,W;
 	cin>>W>>n;
 	for(int i=1;i<=n;i++) cin>>weight[i];
 	knapsack(n,W);
	
}
