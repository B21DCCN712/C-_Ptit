#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream file;
	file.open("VANBAN.in");
	set<string> s;
	string a;
	while( file >> a){
		for( int i=0 ; i< a.size(); i++ ) a[i] = tolower(a[i]);
		s.insert(a);
	}
	for( auto i : s){
		cout << i << endl;
	}
}
