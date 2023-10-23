#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int dem=0;
		while( s.find("100") != -1 ){
			int it= s.find("100");
			s.erase(s.begin() + it, s.begin() + it +3);
			dem +=3;
		}
		if( dem != 0 )cout << dem << endl;
		else cout <<"" << endl;
	}
}
