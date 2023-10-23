#include<iostream>
using namespace std;

long long gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long bcnn;
		bcnn=(a*b)/gcd(a,b);
		cout<<bcnn<<" "<<gcd(a,b)<<endl;
	}
}
