#include<bits/stdc++.h>
using namespace std;

int check1(int n){
	int check=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int tong1(int n){
	int sum=0;
	while(n!=0){
		int m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
}

int tong2(int n){
	int sum=0;
	int i=2;
	while(i<=n){
		if(n%i==0){
			if(check1(i)){
				while(n%i==0){
					sum+=tong1(i);
					n/=i;
				}
			}
		}else i++;
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check1(n)==0 && tong1(n)==tong2(n)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
	
