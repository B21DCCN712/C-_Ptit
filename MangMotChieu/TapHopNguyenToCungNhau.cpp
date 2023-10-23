#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		long long n, m; cin >> n >> m;
		long long sumn = n * (n + 1) / 2;
		long long x = (sumn + m) / 2, y = (sumn - m) / 2;
		if (__gcd(x, y) == 1&&(sumn+m)%2==0)cout << "Yes\n";
		else cout << "No\n";
	}
}
