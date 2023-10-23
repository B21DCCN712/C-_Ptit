#include<bits/stdc++.h>
using namespace std;

long long gcd(int a,int b){
	if( b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a;
		string s;
		cin >> a;
		cin >> s;
		int m=0;
		for(int i=0 ; i<s.size();i++ ){
			m *= 10;
			m += s[i]-'0';
			m %= a;
		}
		cout << gcd(a,m) << endl;
	}
}
