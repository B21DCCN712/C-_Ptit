#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int uoc(int n){
	if(nt(n)) return n;
	if(n==1) return 1;
	if(n%2==0) return 2;
	for(int i=3;i<=n;i+=2){
		if(n%i==0){
			if(nt(i)){
				return i;
				break;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cout<<uoc(i)<<" ";
		}
		cout<<endl;
	}
}
