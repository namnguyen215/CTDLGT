#include<bits/stdc++.h>
using namespace std;

int main(){

		int q;
		cin>>q;
		stack<int> st;
		while(q--){
			
			string s;
			cin>>s;
			if(s=="PUSH"){
				int n;
				cin>>n;
				st.push(n);
			}
			else if(s=="PRINT"){
				if(st.empty()){
					cout<<"NONE"<<endl;
					break;
				}
				else {
					cout<<st.top()<<endl;;
			}
			}
			else if(s=="POP"){
				if(!st.empty()) st.pop();
			}
		}
	}

				
