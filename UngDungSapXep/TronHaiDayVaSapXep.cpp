#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n],b[m],c[m+n];
		int p=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[p]=a[i];
			p++;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c[p]=b[i];
			p++;
		}
		sort(c,c+p);
		for(int i=0;i<p;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
