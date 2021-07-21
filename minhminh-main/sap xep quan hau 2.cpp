#include<bits/stdc++.h>
#define MAX 15
using namespace std;

int a[MAX];
int cot[MAX],xuoi[MAX*2],nguoc[MAX*2];
const int n=8;
int arr[MAX][MAX];
vector<int> v;
int  res;
void Try(int i){
	v.clear();

	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			a[i]=j;
			cot[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n)	{
					int s=0;
				for(int i=1;i<=n;i++) v.push_back(arr[i][a[i]]);
				for(int j=0;j<v.size();j++) s+=v[j];
				res=max(res,s);
			}
				
			else Try(i+1);
			cot[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;
}
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		v.clear();
		res=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) cin>>arr[i][j];
		for(int i=1;i<=n;i++) cot[i]=true;
		for(int i=1;i<=2*MAX;i++) {
			xuoi[i]=true;
			nguoc[i]=true;
		}
	
		
		Try(1);
		cout<<res<<endl;
					
		}

}
