#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- ){
		cin.ignore();
		string s;
		cin >> s;
		int n = s.size();
		int l=-1 , r ;
		for( int i=n-2 ; i>=0 ; i-- ){
			if (s[i] > s[i+1]){
				l=i;
				break;
			}
		}
		if( l!=-1 ){
			for( int i=n-1 ; i>=l+1 ; i-- ){
				if( s[i] < s[l] ){
					r=i;
					break;
				}
			}
		}
		for( int i=n-1 ; i>=l+1 ; i-- ){
			if( s[i] == s[r] ) r=i;
		}
		swap ( s[l], s[r] );
		if( s[0] == '0' || l==-1 ) cout <<"-1";
		else cout << s;
		cout << endl;
	}
}

