#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i=0;i<n;i++) cin >> a[i];
		stack<int>stk;
		vector<int>b;
		stk.push(0);
		b.push_back(1);
		for(int i=1;i<n;i++){
			while(stk.size()>0 && a[stk.top()]<=a[i]) stk.pop();
			if(stk.size()>0) b.push_back(i-stk.top());
			else b.push_back(i+1);
			stk.push(i);
		}
		for(int i=0;i<b.size();i++) cout << b[i] << " ";
		cout << endl;
	}
}
