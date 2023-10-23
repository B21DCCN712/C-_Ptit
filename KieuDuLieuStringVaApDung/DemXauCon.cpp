#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin >> s >> k ;
		int dem=0;
		for(int i=0 ; i < s.size() ; i++){
			set<char> s1;
			for(int j=i ; j < s.size() ; j++){
				s1.insert(s[j]);
				if( s1.size() == k ) dem ++;
				if( s1.size() > k ) break;
			}
		}
		cout << dem << endl;
	}
}
