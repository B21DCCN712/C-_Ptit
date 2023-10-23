#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- ){
		int n;
		string s;
		int c[10]={0};
		cin >> n >> s;
		for( int i=0 ; i<n ; i++ ){
			if( s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7' ){
				c[ s[i]-48 ]++;
			}
			if( s[i]=='4') {
				c[3]++;
				c[2]+=2;
			}
			if( s[i]=='6'){
				c[5]++;
				c[3]++;
			}
			if( s[i]=='8') {
				c[7]++;
				c[2] +=3;
			}
			if ( s[i]=='9'){
			    c[7]++;
				c[3]+=2;
				c[2]++;
			}
		}
		for( int i=9 ; i>1 ; i-- ){
			while( c[i] -- ){
				cout << i;
			}
		}
		cout << endl;
	}
}
