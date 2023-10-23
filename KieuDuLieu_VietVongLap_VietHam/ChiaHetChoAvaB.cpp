#include<iostream>
using namespace std;

int check(int m,int n,int a,int b){
	int res=0;
	for(int i=m;i<=n;i++){
		if(i%a==0) res++;
		if(i%b==0) res++;
		if(i%a==0 && i%b==0) res--;
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n, a, b;
		cin >> m >> n >> a >> b;
		cout<<check(m, n, a, b)<<endl;
	}
}
