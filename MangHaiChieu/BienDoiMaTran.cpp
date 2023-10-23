#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while( t-- ){
		int n;
		cin >> n;
		int a[n][n];
		int maxrow=INT_MIN;
		int maxcol=INT_MIN;
		int tong=0;
		for( int i=0 ; i<n ; i++ ){
			int max1=0;
			for( int j=0 ; j<n ; j++ ){
				cin >> a[i][j];
				max1 += a[i][j];
				tong += a[i][j];
			}
			if ( max1 > maxrow ) maxrow = max1;
		}
		for( int i=0 ; i<n ; i++ ){
			int max2=0;
			for( int j=0 ; j<n ; j++ ){
				max2 += a[j][i];
			}
			if ( max2 > maxcol ) maxcol = max2;
		}
		int res = ( maxrow > maxcol) ? maxrow : maxcol;
		cout << res * n - tong  << endl;
	}
}
