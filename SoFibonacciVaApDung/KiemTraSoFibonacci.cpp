#include<bits/stdc++.h> 
using namespace std; 
bool check(long long n){
	long long a=0,b=1;
	if(n==a|| n==b) return true;
	long long c=a+b;
	while(c<=n){
		if(c==n) return true;
		a=b;
		b=c;
		c=a+b;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
   	while(t--){
   		long long n;
   		cin>>n;
   	if(check(n)){
   		cout<<"YES"<<endl;
	   }else cout<<"NO"<<endl;	
   	}
}

