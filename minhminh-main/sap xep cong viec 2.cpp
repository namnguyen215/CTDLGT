#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
struct job{
	int id;
	int dead;
	int profit;
};
bool cmp(job a,job b){
	return a.profit>b.profit;
}
void solve(job a[],int n){
	sort(a,a+n,cmp);
	bool slot[n+3];
	for(int i=0;i<n;i++) slot[i]=false;
	long long s=0;
	int d=0;
	for(int i=0;i<n;i++){
		for(int j=min(n,a[i].dead)-1;j>=0;j--){
			if(slot[j]==false){
				s+=a[i].profit;
				d++;
				slot[j]=true;
				break;
			}
		}
	}
	cout<<d<<" "<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	job a[n+4];
    	for(int i=0;i<n;i++) cin>>a[i].id>>a[i].dead>>a[i].profit;
    	solve(a,n);
}
}
