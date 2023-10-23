#include <bits/stdc++.h>  
using namespace std; 
int main() { 
	int t; 
	cin>>t; 
	while(t--) { 
		long long n; cin>>n; 
		long a[n+1],sum[n+1]={0}; 
		for(int i=1;i<=n;i++) { cin>>a[i]; } 
		sum[1]=a[1]; sum[2]=max(a[1],a[2]); 
		for(int i=3;i<=n;i++) { 
			sum[i]=max(sum[i-1],a[i]+sum[i-2]); 
		} 
		cout<<sum[n]<<endl;  
	} 
}
