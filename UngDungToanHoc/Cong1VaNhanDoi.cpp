#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		int res=0, dem=0;
		for( int i=0 ; i<n ; i++ ){
			int x;
			cin >> x;
			int m=0;
			while( x > 0){
				if( x % 2 == 0){
					m++;
					x /= 2; 
				}
				if( x % 2 == 1){
					dem++;
					x -=1;
				}
			}
			res = max(res,m);
		}
		cout << res+dem << endl;
	}
}
