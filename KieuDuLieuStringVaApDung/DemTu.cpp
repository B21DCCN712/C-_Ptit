#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		getline(cin,s);
		int n=s.length();
		int dem=0;
		for(int i=0;i<n-1;i++){
			if( s[i]==' '|| s[i]=='\n'|| s[i]=='\t' ){
				if( (s[i+1]!=' ' && s[i+1]!='\n' && s[i+1]!='\t') ){
					dem++;
				}
			}
		}
		if( s[0]!=' ' && s[0]!='\n' && s[0]!='\t') dem++;
		cout<<dem<<endl;
	}
}
