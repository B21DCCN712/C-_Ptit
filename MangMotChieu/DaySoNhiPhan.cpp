#include<bits/stdc++.h>
using namespace std;


int res(int a[],int b[],int n){
	int max1=0;
	for(int i=0 ; i<n ; i++ ){
		int sum1=0,sum2=0;
		for(int j=i ; j<n ; j++){
			sum1 += a[j];
			sum2 += b[j];
			if (sum1==sum2){
			max1 = max(max1,j-i+1);
			}
		}
	}
	return max1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for(int i=0;i<n ; i++ ){
			cin >> a[i];
		}
		for( int i=0 ; i<n ; i++ ){
			cin >> b[i];
		}
		cout << res(a,b,n) << endl;
	}
}
