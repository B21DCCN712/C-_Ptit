#include<bits/stdc++.h>
using namespace std;

long long bcnn(long long a,long long b){
	return a*b/__gcd(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long b=bcnn(x,bcnn(y,z));
		long long first=pow(10,n-1),end=pow(10,n);
		long long m1=first/b,m2=end/b;
		if(m1<1&&m2<1){
			cout<<"-1"<<endl;
			continue;
		}
		if(m1*b<first){
			m1++;
			cout<<m1*b<<endl;
		}else cout<<m1*b<<endl;
	}
}
