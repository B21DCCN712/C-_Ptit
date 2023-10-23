#include<bits/stdc++.h>
using namespace std;

bool check(char x){
	return x == 'u' || x =='e' || x=='o' || x=='a' || x=='i' || x=='y';
}
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90) s[i]+=32;
	}
	for(int i=0;i<s.size();i++){
		if(check(s[i])){
			s.erase(i,1);
			i--;
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<"."<<s[i];
	}
}
