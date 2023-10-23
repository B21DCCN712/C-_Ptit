#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		while(m--){
			int L,R;
			cin>>L>>R;
			int sum=0;
			for(int i=L-1;i<R;i++){
				sum+=a[i];
			}
			cout<<sum<<endl;
		}
	}
}
