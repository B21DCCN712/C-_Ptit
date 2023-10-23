#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream file("DATA.in");
	int m,n,x;
	set<int> s1 , s2;
	file >> m >> n;
	while(m--){
		file >> x;
		s1.insert(x);
	}
	while(n--){
		file >> x;
		s2.insert(x);
	}
	for( auto x : s1){
		if( s2.find(x) != s2.end() ) cout << x <<" ";
	}
}
