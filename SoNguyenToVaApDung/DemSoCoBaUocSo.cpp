#include<iostream>
#include<math.h>
using namespace std;

int check(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0; break;
		}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	long long n;
	cin>>n;
	int dem=0;
	int m=sqrt(n);
	for(long long i=0;i<=m;i++){
		if(check(i)) dem++;
	}
	cout<<dem<<endl;	
	}
}
