#include <bits/stdc++.h> 
using namespace std ; 

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long cnt=0;
		int a[n];		
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
		}
		sort(a,a+n);
		for( int i=0 ; i<n-1 ; i++ ){
			int id = lower_bound ( a,a+n,a[i] + k  ) - a;
			cnt += (id-i-1);			
		}
		cout << cnt << endl;
	}
}

