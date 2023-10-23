#include<bits/stdc++.h>
using namespace std;

void in( int a[], int n ){
	for( int i=0 ; i<n ; i++ ){
		cout << a[i] << " ";
	}
	cout << endl;
}

void sinh( int a[], int n ){
	int k=n-1;
	while( k>=1 && a[k] > a[k-1] ){
		k--;
	}
	swap ( a[k], a[k-1] );
	reverse( a+k, a+n );
	in( a, n );
}
int main(){
	int t;
	cin >> t;
	while( t-- ){
		int n;
		cin >> n;
		int a[n];
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
		}
		sinh( a, n );
	}
}
