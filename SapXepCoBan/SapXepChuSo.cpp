#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> s;
		for(int i=0;i<n;i++){
			int u;
			cin>>u;
			while(u>0){
				int a=u%10;
				s.insert(a);
				u/=10;
			}
		}
		for(int x: s){
			cout<<x<<" ";
		}cout<<endl;
	}
}
