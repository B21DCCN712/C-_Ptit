#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int m=s1.find(s2);
	int n=s2.length();
	s1.erase(m,n);
	cout<<s1;
}
