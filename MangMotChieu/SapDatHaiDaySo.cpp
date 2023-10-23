#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >> m;
		int a[n] , b[m] ;
		vector<int> v;
		map<int,int> mp;
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort(a,a+n);
		for( int i=0 ; i<m ; i++ ){
			cin >> b[i];
			int tmp = mp[b[i]];
			while(tmp--){
				v.push_back(b[i]);
				mp[b[i]]--;
			}
		}
		
		for( int i=0 ; i<n ; i++ ){
			if(mp[a[i]]) v.push_back(a[i]);
		}
		for(auto x : v) cout << x <<" ";
		cout << endl;
	}
}
