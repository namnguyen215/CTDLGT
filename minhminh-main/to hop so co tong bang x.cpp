#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n,int sum,vector<vector<int> >& res,vector<int>& r,int i){
	if(sum==0){
		res.push_back(r);
		return;
		}
	
	while(i<n&&sum-a[i]>=0){
		r.push_back(a[i]);
		solve(a,n,sum-a[i],res,r,i);
		i++;
		r.pop_back();
		}
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n+3];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		vector<int> v;
		vector<vector<int> > x;
		solve(a,n,s,x,v,0);
		if(x.size()==0) cout<<-1<<endl;
		else{
			cout<<x.size()<<" ";
			for(int i=0;i<x.size();i++){
				cout<<"[";
				for(int j=0;j<x[i].size()-1;j++)
					cout<<x[i][j]<<" ";
				cout<<x[i][x[i].size()-1]<<"] ";
			}
			cout<<endl;
			}
		}
	
}
