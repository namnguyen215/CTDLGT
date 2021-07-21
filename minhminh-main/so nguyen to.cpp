#include<bits/stdc++.h>
using namespace std;
 vector<int> se;
vector<int> prime;
vector<vector<int> > g;
int d=0;
bool snt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
void in(){
	for(int i=0;i<g.size();i++){
		for(int j=0;j<g[i].size();j++)
			cout<<g[i][j]<<" ";
		cout<<endl;
	}
	}
void primesum(int total,int n, int s, int index){
	if(total==s&&se.size()==n){
		d++;
		g.push_back(se);
		return;
	}
	if(total>s||index==prime.size()) return;
	se.push_back(prime[index]);
	primesum(total+prime[index],n,s,index+1);
	se.pop_back();//bo phan tu cuoi vector
	primesum(total,n,s,index+1);
	}
void allprimes(int n,int s,int p){
	for(int i=p+1;i<=s;i++){
		if(snt(i)==true)
			prime.push_back(i);
		}
	if(prime.size()<n) return;
	primesum(0,n,s,0);
	}
int main()
{	int t;
    cin>>t;
    while(t--){
    	d=0;
    	g.clear();
    	se.clear();
    	prime.clear();
    	int n,p,s;
    	cin>>n>>p>>s;
    	allprimes(n,s,p);
    	cout<<d<<endl;
    	in();
    }
}
    
       
    
   

