#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=2;
		int dem1=0,dem2=0;
		while(n!=1){
			if(n%i==0){
				dem2++;
				while(n%i==0){
					dem1++;
					n/=i;
				}
			}
			i++;
		}
		if(dem1==3 && dem2==3) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}
