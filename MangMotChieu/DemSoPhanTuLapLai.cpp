#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1] && a[i+1]!= a[i+2]) dem++;
			if( a[i]==a[i+1] ) dem++;
		}
		cout<<dem<<endl;
	}
}
