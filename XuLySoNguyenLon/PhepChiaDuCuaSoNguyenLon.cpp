#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long long b;
		cin>>a>>b;
		long long surplus =0;
		int n=a.length();
		for(int i=0;i<n;i++){
			int m=a[i]-'0';
			surplus = ( surplus * 10 + m ) % b;			
		}
		cout<< surplus <<endl;
	}
}
