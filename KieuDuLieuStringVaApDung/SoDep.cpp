#include<iostream>
#include<string.h>
using namespace std;

int check(string s){
	int check=1;
	int n=s.size();
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]) check=0;
		if((s[i]-'0')%2==1) check=0;
	}
	if(check==0) return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	if(check(s)){
		cout<<"YES"<<endl;
	}else cout<<"NO"<<endl;
	}
}
