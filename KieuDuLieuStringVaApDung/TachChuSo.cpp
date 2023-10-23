#include<bits/stdc++.h>
using namespace std;

void tcs(string s){
	int sum=0;
	for(int i=0;i<s.length();i++){
		if( s[i] >= '0' && s[i] <= '9'){
			sum += s[i]- '0';
		}
	}
	cout << sum ;
}

void chucai(string s){
	multiset <char> a;
	for(int i=0;i<s.length();i++){
		if( s[i] >= 'A' && s[i] <= 'Z'){
			a.insert(s[i]);
		}
	}
	for(char x : a){
		cout<<x;
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		chucai(s) ; 
		tcs(s) ; 
		cout<< endl;
	}
}
