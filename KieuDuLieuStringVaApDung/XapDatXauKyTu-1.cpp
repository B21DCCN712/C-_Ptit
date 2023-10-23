#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	int a[500]={0} , n=s.size() ;
	for(int i=0;i<n;i++){
		a[s[i]]++;
	}
	int m=(n+1)/2;
	for(int i='a';i<='z';i++){
		if (a[i] > m) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
}
