#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	int res=0;
	cin.ignore();
	vector<string> v;
	string s;
	while(t--){
		cin >> s;
		v.push_back(s);
	}
	for( int i=0 ; i<v.size(); i++ ){
		for( int j=0 ; j<v.size() ; j++){
			if( i!=j ){
				if( v[i].find(v[j]) != -1 )res++;
			}
		}
	}
	cout << res;
}
