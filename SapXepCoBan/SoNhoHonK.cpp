#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int x=0;
		int a[n];
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
			if ( a[i] <= k) x ++;
		}
		int c=0 , res=0 ;
		for( int i=0 ; i<x ; i++ ){
			if( a[i] > k ) c++;
		}
		res=c;
		int i=0 , j=x;
		while(j<n){
			if( a[i] > k) c--;
			if( a[j] > k) c++;
			res = min ( res,c);
			i++;j++;
		}
		cout << res << endl;
	}
}
