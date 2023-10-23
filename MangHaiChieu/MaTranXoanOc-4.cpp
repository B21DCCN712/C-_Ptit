#include<bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin >> n ;
		int b[n*n];
		for(int i=0;i<n*n;i++){
				cin >> b[i];
		}
		int a[n][n];
		int k=0;
		sort(b,b+n*n);
		int p=0,q=0,hang=n-1,cot=n-1;
		while(k<n*n){
		for(int i=q; i <= cot ; i++){
			a[p][i] = b[k++];
		}
		for(int i=p+1;i<=hang;i++){
			a[i][cot]= b[k++];
		}
		for(int i=cot-1;i>=q;i--){
			a[hang][i] = b[k++];
		}
		for(int i=hang-1;i>=p+1;i--){
			a[i][q]= b[k++];
		}
		p++;
		q++;
		cot--;
		hang--;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout << a[i][j] <<" ";
			}
			cout << endl;
		}
}
