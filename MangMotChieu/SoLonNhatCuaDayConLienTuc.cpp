#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];		
		multiset<int> s;
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
		}
		for( int i=0 ; i<k ; i++ ){
			s.insert(a[i]);
		}
		for( int i=k ; i<n ; i++ ){
			cout << *s.rbegin()<<" ";
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
		}
		cout << *s.rbegin() << endl;
	}
}
