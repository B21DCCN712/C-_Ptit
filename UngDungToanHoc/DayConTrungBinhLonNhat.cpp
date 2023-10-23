#include <bits/stdc++.h>  
using namespace std; 

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		int a[m];
		int max=INT_MIN, indx;
		for( int i=0 ; i<m ; i++ ) cin >> a[i];
		for( int i=0 ; i<=m-n; i++){
			int sum=0;
			for( int j=i; j<i+n; j++) sum += a[j];
			if(sum > max){
				max=sum;
				indx=i;
			}
		}
		for(int i=indx; i<indx+n ; i++) cout << a[i] <<" ";
		cout << endl;
	}
}
