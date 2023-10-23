#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , p , q;
		cin >> n;
		int a[n],b[n];
		for(int i=0 ; i < n ; i++ ){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a,a+n);
		for(int i=0 ; i < n ; i++ ){
			if(a[i] != b[i] ){
				p = i + 1;
				break ;
			}
		}
		for(int i=n-1 ; i >= 0 ; i-- ){
			if(a[i] != b[i] ){
				q = i + 1;
				break ;
			}
		}
		cout << p << " " << q << endl;
	}
}
