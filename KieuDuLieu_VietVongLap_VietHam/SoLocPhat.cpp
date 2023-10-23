#include<iostream>
using namespace std;

bool check(string s){
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='0' || s[i]=='6' || s[i]=='8') {
			return true ;
		}else return false ;
	}
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
