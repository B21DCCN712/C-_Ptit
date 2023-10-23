#include<iostream>
#include<math.h>
using namespace std;

int check(long long n){
	if(n<2) return 0;
	int check=0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			check++;
	}
	}
	if(check==0 ){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	long long a;
	cin>>a;
	for(long long i=2;i<=a;i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	}
}
