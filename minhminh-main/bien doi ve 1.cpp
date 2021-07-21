#include <bits/stdc++.h>
using namespace std;
/*
operation: div3 or div 2 or subtract 1 to transform x into 1
idea: Su dung BFS de duyet
su dung them ham set de tranh khong bien doi lai thanh so da xet
*/
struct node{
	int value;//gia tri su khi bien doi
	int count;//so buoc thuc hien
};
int solve(int x){//transform x into 1
	set<int> s;//su dung de tranh bien doi lai cac so dã xet,luu gia tri value
	queue<node> q;
	node n={x,0};//gia tri ban dau value=x,count=0;
	q.push(n);
	//su dung BFS
	while(!q.empty()){
		node b=q.front();
		q.pop();
		s.insert(b.value);
		if(b.value==1) return b.count;
		if(b.value==3||b.value==2) return b.count+1;
		//vi x>1 nen se uu tien phep bien doi làm x nho hon
		//div 3
		if(s.find(b.value/3)==s.end()&&b.value%3==0){//chua xet gia tri b.value
			node m;
			m.value=b.value/3;
			m.count=b.count+1;
			q.push(m);
		}//div 2
		if(s.find(b.value/2)==s.end()&&b.value%2==0){//chua xet gia tri b.value
			node m;
			m.value=b.value/2;
			m.count=b.count+1;
			q.push(m);
		}
		//tru1
		if(b.value-1>0&&s.find(b.value-1)==s.end()){
			node k;
			k.value=b.value-1;
			k.count=b.count+1;
			q.push(k);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<solve(x)<<endl;
	}
}
