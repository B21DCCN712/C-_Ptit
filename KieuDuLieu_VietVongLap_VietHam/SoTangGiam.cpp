#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

bool tang(int n){
	int a=n%10;
	n/=10;
	while(n>0){
		if(a<= n%10) {
			return false;
		}
		a=n%10;
		n/=10;
	}
	return true;
}

bool giam(int n){
	int a=n%10;
	n/=10;
	while(n>0){
		if(a>= n%10) {
			return false;
		}
		a=n%10;
		n/=10;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int d=0;
		int a=pow(10,n-1);
		int b=pow(10,n);
		for(int i=a;i<=b;i++){
			if(tang(i) || giam(i)){
				if(nt(i)) d++;
			}
		}
		cout<<d<<endl;
	}
}
