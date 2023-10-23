#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		pair<int,int> b[10000];
		int n,x;
		cin >> n >> x;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i].first= abs(x-a[i]);
			b[i].second=i;
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			cout << a[b[i].second] << " ";
		}
		cout << endl;
	}
	return 0;
}
