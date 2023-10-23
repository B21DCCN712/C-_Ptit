#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while ( t-- ){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		int b[m*n];
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int p=0,q=0,hang=n-1,cot=m-1;
		while(k<m*n){
		for(int i=q; i <= cot ; i++){
			b[k++]=a[p][i];
		}
		for(int i=p+1;i<=hang;i++){
			b[k++]=a[i][cot];
		}
		for(int i=cot-1;i>=q;i--){
			b[k++]=a[hang][i];
		}
		for(int i=hang-1;i>=p+1;i--){
			b[k++]=a[i][q];
		}
		p++;
		q++;
		cot--;
		hang--;
		}
		for(int i=0;i<m*n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
