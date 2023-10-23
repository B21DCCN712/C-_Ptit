#include<iostream>
using namespace std;

int tong(int n){
	int sum=0,m;
	while(n!=0){
		m=n%10;
		sum+=m;
		n/=10;
	}
	if(sum<10) return sum;
	return tong(sum);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	cout<<tong(n)<<endl;	
	}
}
