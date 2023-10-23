#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n];
		for( int i=0 ; i<n ; i++ ){
			cin >> a[i];
			b[i]=a[i];
		}
		for( int i=0; i<n-1 ; i++){
			for(int j=i+1;j<n;j++){
				if(a[i] < a[j]) {
					b[j] = max(b[j],b[i] + a[j]);
				}
			}
		}
		sort(b,b+n);
		cout << b[n-1] << endl;			
	}
}
