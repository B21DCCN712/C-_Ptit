#include<iostream>
using namespace std;

long long Fi(int n){
	if(n==1|| n==2) return 1;
	long long a1=1,a2=1;
	long long i=3,a;
	while(i<=n){
		a=a1+a2;
		a1=a2;
		a2=a;
		i++;
	}
	return a;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<Fi(n)<<endl;
	}
}
