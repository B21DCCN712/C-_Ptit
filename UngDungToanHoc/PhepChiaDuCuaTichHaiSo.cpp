#include<bits/stdc++.h>
using namespace std;

long long a,b,c;
long long modul( long long a, long long b ){
	if( b == 0 ) return 0;
	long long res = modul ( a , b/2);
	if( b % 2 == 0 ) return ( res % c + res % c) % c;
	else return ( res % c + res % c + a % c) % c;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		cout << modul(a,b) << endl;
	}
}
