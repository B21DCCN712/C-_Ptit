#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int n;
		string s;
		cin >> n;
		cin.ignore();
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if( s[i] >= 'A' && s[i] <= 'Z') s[i] +=32;
		}
		stringstream s1(s);
		vector<string> s2;
		string token;
		while(s1 >> token){
			token[0] -=32;
			s2.push_back(token);
		}
		int Size=s2.size();
		if(n==1){
			cout << s2[Size-1] <<" ";
			for(int i=0;i<Size-1;i++){
				cout << s2[i]<<" ";
			}
		}
		else if(n==2){
			for(int i=1;i<Size;i++){
				cout << s2[i]<<" ";
			}
			cout << s2[0];
		}
		cout << endl;
	}
}
