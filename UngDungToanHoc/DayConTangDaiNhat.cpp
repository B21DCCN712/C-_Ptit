#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		int n; 
		cin >> n; 
		int a[n], b[1001]; 
		for(int i = 0; i < n; i++ ) { 
			cin >> a[i]; b[i] = 1; 
		} 
		for (int i = 1; i < n; i++) { 
			int k = 0; 
			for (int j = 0; j < i; j++) { 
				if(a[j] < a[i] && b[j] > k) { 
					b[i]++; 
					k++; 
				} 
			} 
		}
			sort(b, b+n); 
			cout << b[n-1] << endl;  
	}
}
