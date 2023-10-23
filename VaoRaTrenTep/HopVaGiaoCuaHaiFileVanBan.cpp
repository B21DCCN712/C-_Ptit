#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream file1, file2 ;
	file1.open("DATA1.in");
	file2.open("DATA2.in");
	set<string> s1 , s2 , s3;
	string a;
	while( file1 >> a){
		for( int i=0 ; i< a.size(); i++ ) a[i] = tolower(a[i]);
		s1.insert(a);
		s3.insert(a);
	}
	while( file2 >> a){
		for( int i=0 ; i< a.size(); i++ ) a[i] = tolower(a[i]);
		s1.insert(a);
		s2.insert(a);
	}
	for( auto x : s1)cout << x << " ";
	cout << endl;
	for( auto x : s2) {
		if( s3.find(x) != s3.end()) cout << x <<" ";
	}
}

