#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int &x:a) cin>>x;
		int left , right;
		cin >> left >> right ;
		while(a[left]<=a[left+1] && left < right) {
			left++;
		}
		while(a[left]>=a[left+1] && left < right) {
			left++;
		}
		if(left != right){
			cout<<"No";
		}else cout<<"Yes";
		cout<<endl;
	}
}
