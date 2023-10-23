#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,n;
		cin>>m>>n;
		long long a[m];
		long long sum=0;
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			long long s=1;
			for(int j=m-i-1;j>0;j--){
				s = (s*n) % mod;
			}
			sum += a[i] * s;
			if(sum > mod) sum %= mod;
		}
		cout<<sum<<endl;
	}
}
