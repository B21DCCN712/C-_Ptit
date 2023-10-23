#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,s1,s=0;
		cin>>n>>k;
		for(long long i=1;i<=n;i++){
			s1=i%k;
			s+=s1;
		}
		if(s==k){
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
}
