#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		int f[100005]={0};
		for(int i=1 ; i<=n ; i++ ){
			cin >> a[i];
			f[i] = f[i-1] + a[i];
		}
		int res=-1;
		for( int i=1 ; i<=n ; i++){
			if ( f[i-1] == f[n] - f[i] && res==-1) res=i;
		}
		cout << res << endl;
	}
}
