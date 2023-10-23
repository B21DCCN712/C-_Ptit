#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
		}
		int res=INT_MIN;
		for( int i=0 ; i<n ; i++ ){
			for( int j = n-1 ; j>=0 ; j-- ){
				if ( a[i] < a[j]) {
					res = max ( res , abs(i-j));
					break;
				}
			}
		}
		cout << res << endl;
	}
}
