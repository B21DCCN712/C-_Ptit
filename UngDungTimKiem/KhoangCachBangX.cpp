#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		int k=-1;
		for( int i=0 ; i<n ; i++ ) cin >> a[i];
		sort(a,a+n);
		for( int i=0 ; i<n ; i++ ){
			if ( binary_search(a,a+n,a[i] + x)) {
				k=1;
				break;
			}
		}
		cout  << k << endl;
	}
}
