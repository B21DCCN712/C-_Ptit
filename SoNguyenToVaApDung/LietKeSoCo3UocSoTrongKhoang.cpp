#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){ 
	if (n < 2) return false; 
	for(int i = 2; i <= sqrt(n); ++i) {
 		if (n%i==0) return false;
  	}
   return true; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long L,R;
		cin>>L>>R;
		long long dem=0;
		long long m=sqrt(L),n=sqrt(R);
		for(long long i=m;i<=n;i++){
			if(isPrime(i)) dem++;
		}
		cout<<dem<<endl;
	}
}
