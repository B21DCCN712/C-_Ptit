#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=a[n-1]-a[0]+1;
		set<int> s;
		for(int i=0;i<n;i++){
			s.insert(a[i]);
		}
		cout<<m-s.size()<<endl;
		}
	}
