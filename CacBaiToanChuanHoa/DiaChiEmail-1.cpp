#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s="";
	string s1;
	getline(cin,s1);
	for(int i=0;i<s1.size();i++){
		if(s1[i]>=65 && s1[i]<=90) s1[i]+=32;
	}
	int k;
	for(int i=s1.size()-1;i>=0;i--){
		if(s1[i]!=' ' && s1[i-1]==' '){
			k=i;
			break;
		}
	}
	for(int i=k;i<s1.size();i++){
		s+=s1[i];
	}
	s+=s1[0];
	for(int i=0;i<k-1;i++){
		if(s1[i]==' ' && s1[i+1]!=' '){
			s+=s1[i+1];
		}
	}
	s+="@ptit.edu.vn";
	cout<<s;
}
