#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int check[100005]={0};
		for(int i=0;i<s.size();i++){
			check[s[i]]++;
		}
		for(int i=0;i<s.size();i++){
			if(check[s[i]]<2) cout<< s[i];
		}
		cout<<endl;
	}
}
