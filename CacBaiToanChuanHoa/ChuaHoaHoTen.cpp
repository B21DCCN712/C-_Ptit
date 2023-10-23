#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int k;
	string s1="";
	for(int i=0;i<s.size();i++){
		if(s[i]>=65&& s[i]<=90) s[i]+=32;
	}
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!=' '&& s[i-1]==' '){
			k=i;
			break;
		}
	}
	s[0]-=32;
	for(int i=0;i<k-1;i++){
		if(s[i]==' '&& s[i+1]!=' '){
			s[i+1] -=32;
		}
		s1 += s[i];
	}
	s1+=", ";
	for(int i=k;i<s.size();i++){
		s[i]-=32;
		s1+=s[i];
	}
	cout<<s1;
}
