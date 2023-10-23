#include<iostream>
using namespace std;

long long ucln(long long a,long long b){
	if(b==0) return a;
	return ucln(b,a%b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long kq=1;
		for(long long i=2;i<=n;i++){
			kq=kq*i/ucln(kq,i);
		}
		cout<<kq<<endl;
	}
}
