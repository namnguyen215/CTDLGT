#include<iostream>
using namespace std;
#include<stdio.h>
/* n=4,w=9;
weight: 4 2 7 1
value : 8 1 8 1
    0    1	2	3	4	5	6	7 	8 	9

1   0	0	0	0	5	5	5	5	5	5
2   0	0	1	1	5	5	6	6	6	6
3   0	0	1	1	5	5	6	8	8	9
4   0	1	1	2	5	6	6	8	9	9.
*/
int n,i,w,W;
int weight[1001],v[1001];
int C[1001][1001];

void knapsack(int n,int W)
{

for(int c = 0; c <= W; c++)
	C[0][c] = 0;
  
for(i = 1; i <= n; i++)
	C[i][0] = 0;
 
for(i=1;i<=n;i++){
	  for(w=0;w<=W;w++)
		  if(weight[i]<=w){						  
			 if(v[i]+C[i-1][w-weight[i]]>=C[i-1][w])
		  		C[i][w]=v[i]+C[i-1][w-weight[i]];
			else
		  		C[i][w]=C[i-1][w];
		}
	else
		C[i][w]=C[i-1][w];			
}
	cout<<C[n][W];

}
int main(){
 int t;
 cin>>t;
 while(t--){
 	cin>>n>>W;
 	for(i=0;i<n;i++) cin>>weight[i];
 	for(i=0;i<n;i++) cin>>v[i];
	knapsack(n,W);
	cout<<endl;
	}
}
