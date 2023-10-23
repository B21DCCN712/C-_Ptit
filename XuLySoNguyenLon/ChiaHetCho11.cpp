#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int n=s.length();
	int sum=0;
	for(int i=0;i<n;i++){
		if(i % 2 ==0 )sum+= (s[i]-'0');
		else sum -= (s[i]-'0');
	}
	if(sum % 11 ==0) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"1"<<endl;
		}else cout<<"0"<<endl;
	}
}
