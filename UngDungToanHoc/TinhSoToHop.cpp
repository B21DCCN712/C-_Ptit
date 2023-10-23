#include<bits/stdc++.h> 
using namespace std; 

long long c[1005][1005]; // c[i][j] : luu to hop chap j cua i 
const int mod = 1e9 +7; 
void solve(){ 
	for(int i=0;i<=1000;i++){ 
		for(int j=0;j<=i;j++){ 
			if(j==0|| j==i) c[i][j]=1; 
			else c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod; 
		} 
	} 
} 
int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
		long long n,r; 
		cin>>n>>r; 
		solve(); 
		cout<<c[n][r]<<endl; 
	} 
}
