#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,b;
	cin >> n >> k >> b;
	bool s[100001]={0};
	while(b--){
		int x;
		cin >> x;
		s[x]=1;
	}
	int c=0;
	for( int i=1 ; i<=k ; i++){
		c += s[i];
	}
	int res=c;
	int i=1,j=k+1;
	while(j<=n){
		c -= s[i];
		c += s[j];
		res = min(res,c);
		i++;
		j++;
	}
	cout << res;
}
