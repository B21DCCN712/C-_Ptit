#include<bits/stdc++.h>
using namespace std;

int a[5]={ -1 , 0 , 0 , 1};
int b[5]={ 0 , -1 , 1 , 0};
char s[100][100];
int n,m;
void dsp(int i,int j){
	s[i][j]='*';
	for( int k=0 ; k<4 ; k++){
		int newi = i+a[k];
		int newj = j+b[k];
		if( newi >=0 && newi < n && newj >=0 && newj <m && s[newi][newj] == 'O'){
			dsp(newi, newj);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for( int i=0 ; i<n ;i++){
			for( int j=0 ; j<m ; j++ ){
				cin >> s[i][j];
			}
		}
		for( int i=0 ; i<n ;i++){
			for( int j=0 ; j<m ; j++ ){
				if( i==0 || i==n-1 || j==0 || j==m-1){
					if( s[i][j] =='O') dsp(i,j);
				}
			}
		}
		for( int i=0 ; i<n ;i++){
			for( int j=0 ; j<m ; j++ ){
				if( s[i][j] =='*') cout << 'O' <<" ";
				else cout <<'X'<<" ";
			}
			cout << endl;
		}
	}
}
