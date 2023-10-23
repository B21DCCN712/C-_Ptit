#include<bits/stdc++.h>
#include<set>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	set<int> data;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		data.insert(a[i]);
	}
	
	for(int x: data) {
		std::cout << x << " ";
	}
}

