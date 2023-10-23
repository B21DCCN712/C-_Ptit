#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long tong=0;
	for(int i=1;i<=n;i++){
		long long tich=1;
		for(int j=1;j<=i;j++){
			tich=tich*j;
		}
		tong+=tich;
	}
	cout<<tong;
}
