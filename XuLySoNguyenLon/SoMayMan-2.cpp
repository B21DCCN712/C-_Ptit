#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum += s[i]-'0';
	}
	if(sum<10) return sum;
	return check(to_string(sum));
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(check(s)==9){
			cout<<"1"<<endl;
		}else cout<<"0"<<endl;
	}
}
