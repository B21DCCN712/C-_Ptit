#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for( int i=0 ; i<n ; i++  ) cin >> a[i];
		int min=INT_MAX;
		int check=-1;
		for( int i=0 ; i<n ; i++ ){
			int tong=0;
			for( int j=i; j<n ; j++ ){
				tong += a[j];
				if( tong > x){
					check=1;
					if(min > (j-i+1)) min = j-i+1;
					break;
				}
			}
		}
		if(check==1) cout << min << endl;
		else cout <<"-1"<< endl;
	}
}
