#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		long long d=1;
		for(int i=0;i<b;i++){
			d=(d*a)%c;
		}
		cout<<d;
		cout<<endl;
	}
}
