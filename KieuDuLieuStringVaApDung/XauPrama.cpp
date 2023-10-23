#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string a;
		getline(cin,a);
		int k;
		cin>>k;
		set <char> s;
		for(char x : a){
			s.insert(x);
		}
		if(26-s.size()<=k){
			cout<<"1"<<endl;
		}else cout<<"0"<<endl;	
	}
}
