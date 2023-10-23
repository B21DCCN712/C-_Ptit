#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int check=0,a=2;
		while(n!=1){
			if(n%a==0){
				check++;
				if(check==k){
					cout<<a<<endl;
				}else n/=a;
			}
			else a++;
		}
		if(check<k) {
			cout<<"-1"<<endl;
		}
	}
}
