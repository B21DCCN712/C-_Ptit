#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n];
		int res=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==m) res++;
		}
		if(res==0) {
			cout<<"-1"<<endl;
		}else cout<<res<<endl;
	}
}
