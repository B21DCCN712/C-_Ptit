#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m , p;
		cin >> n >> m >> p;
		int a[n][m];
		int b[m*n];
		int k=0;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		int h1=0,h2=n-1,c1=0,c2=m-1;
		while(k<m*n){
			
			if(k<m*n){
			for(int i=c1 ; i<=c2 ; i++){
				b[k++] = a[h1][i];
			}
			h1++;
			}
			
			if(k<m*n){
			for(int i=h1;i<=h2;i++){
				b[k++]=a[i][c2];
			}
			c2--;
			}
			
			if(k<m*n){
			for(int i=c2;i>=c1;i--){
				b[k++]=a[h2][i];
			}
			h2--;
			}
			
			if(k<n*m){
			for(int i=h2;i>=h1;i--){
				b[k++]=a[i][c1];
			}
			c1++;
			}
		}
		cout << b[p-1];
		cout << endl;
	}
}
