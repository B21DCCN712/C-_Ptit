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
	long long a,b,c;
	cin>>a>>b;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	for(long long i=a;i<=b;i++){
		if(check(i)) {
			cout<<i<<" ";
		}
	}
}
