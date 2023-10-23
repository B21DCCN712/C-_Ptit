#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long f[1001];
		f[0]=0,f[1]=1;
		for(int i=2;i<=n;i++){
			f[i]= f[i-1] + f[i-2];
			f[i] %= mod;
		}
		cout << f[n] << endl;
	}
}
