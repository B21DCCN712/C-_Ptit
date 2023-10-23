#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		long long max1=INT_MIN;
		long long max2=0;
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
			max2 += a[i];
			max1 = max( max1 , max2);
			if ( max2 < 0 ) max2 = 0 ;
		}
		if( max1 < 0 ) cout <<"-1" << endl;
		else cout << max1 << endl;
	}
}
