#include<bits/stdc++.h>
using namespace std;
long long modul = 1000000007;

long long uoc(long long a,long long b){
	if(b==0) return a;
	return uoc(b,a%b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long res=1;
		for( int i=0 ; i<n ; i++ ) cin >> a[i];
		long long g=a[0];
		for( int i=1 ; i<n ; i++ ){
			g = uoc(g,a[i]);
		}
		for( int i=0 ; i<n ; i++ ){
			long long t=g ;
			while(t--){
				res *= a[i];
				res = res % modul;
			}	
		}
		cout << res << endl;
	}
}
