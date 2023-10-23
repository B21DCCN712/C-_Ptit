#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int check=0;
		for(int i=1;i<n;i++){
			if((m*i)%n==1){
				check=1;
				cout<<i<<endl;
				break;
			}
		}
		if(check==0) {
			cout<<"-1"<<endl;
		}
	}
}
