#include<bits/stdc++.h>
using namespace std;

int check(int a){
	int dem=0;
	for(int i=1;i<=sqrt(a);i++){
		if(a % i == 0){
			if(i % 2 ==0) dem++;
			if((a/i) % 2 ==0) dem++;
			if(a/i==i && i % 2 ==0) dem--;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<check(n)<<endl;
	}
}
