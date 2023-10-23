#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	vector<int> v;
	map<int,int> m;
	while(cin>>x){
		v.push_back(x);
	}
	for(auto x : v){
		m[x]++;
	}
	for(auto x : v){
		if( m[x] != 0) cout << x <<" "<< m[x] << endl;
		m[x]=0;
	}
}
