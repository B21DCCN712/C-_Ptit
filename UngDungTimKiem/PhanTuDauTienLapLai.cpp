#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int> s;
		int check=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			s.insert(a[i]);
			if(i+1-s.size()==1){
				check=i;
				break;
			}
		}
		if(s.size()==n){
			cout<<"-1"<<endl;
		}else cout<<a[check]<<endl;
	}
}
