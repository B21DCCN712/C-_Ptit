#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long Max=INT_MIN;
		for( int i=0 ; i<n ; i++ ) cin >> a[i];
		for( int i=0 ; i<n ; i++ ){
			long long res=1;
			for( int j=i ; j<n ; j++ ){
				res = res * a[j];
				Max = max( Max,res );
			}
		}
		cout << Max << endl;
	}
}
