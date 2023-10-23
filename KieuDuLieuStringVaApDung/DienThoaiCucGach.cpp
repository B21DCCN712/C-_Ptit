#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int check=1;
		for(int i=0 ; i < s.size() ; i++){
			if(s[i] >='A' && s[i] <='Z') s[i] +=32;
		}
		for(int i=0 ; i < s.size() ; i++){
			if( s[i] == 'a' || s[i] == 'b' || s[i] == 'c') s[i] = 2-'0';
			if( s[i] == 'd' || s[i] == 'e' || s[i] == 'f') s[i] = 3-'0';
			if( s[i] == 'g' || s[i] == 'h' || s[i] == 'i') s[i] = 4-'0';
			if( s[i] == 'j' || s[i] == 'k' || s[i] == 'l') s[i] = 5-'0';
			if( s[i] == 'm' || s[i] == 'n' || s[i] == 'o') s[i] = 6-'0';
			if( s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' ) s[i] = 7-'0';
			if( s[i] == 't' || s[i] == 'u' || s[i] == 'v') s[i] = 8-'0';
			if( s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z' ) s[i] = 9-'0';
		}
		int n=s.size();
		for(int i=0 ; i < n / 2 ; i++){
			if ( s[i] != s[n-1-i] ) check=0;
		}
		if(check == 0 ) {
			cout << "NO" << endl;
		}else cout << "YES" << endl;
	}
}
