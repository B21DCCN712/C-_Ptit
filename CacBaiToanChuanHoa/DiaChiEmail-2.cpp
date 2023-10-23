#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> m;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- ){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] +=32;
		}
		stringstream ss(s);
		string token;
		vector<string> s1;
		while(ss >> token){
			s1.push_back(token);
		}
		string kq="";
		int c=s1.size();
		kq += s1[c-1];
		for(int i=0;i<c-1;i++){
			kq += s1[i][0];
		}
		m[kq]++;
		if(m[kq] >1) kq += (m[kq] +'0');
		kq += "@ptit.edu.vn";
		cout << kq << endl ;
	}
}
