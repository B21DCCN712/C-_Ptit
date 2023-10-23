#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		set<char> ss;
		for( int i=0 ; i<s.size() ; i++ ) ss.insert(s[i]);
		int n=ss.size();
		int min=100000;
		for( int i=0 ; i<s.size() ; i++){
			set<char> c;
			for( int j=i ; j<s.size(); j++){
				c.insert(s[j]);
				if(c.size() == n ){
					if( min  > (j-i)) min = j-i+1;
					break;
				}
			}
		}
		cout << min << endl;
	}
}
