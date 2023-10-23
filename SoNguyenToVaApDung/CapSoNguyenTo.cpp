#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	nhap: while(t--){
		int n;
		cin>>n;
		int res=0;
		for(int i=2;i<=sqrt(n);i++){
			if(check(i)&&check(n-i)){
				res=1;
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		if(res==0){
			cout<<endl;
			goto nhap;
		}
	}
}
