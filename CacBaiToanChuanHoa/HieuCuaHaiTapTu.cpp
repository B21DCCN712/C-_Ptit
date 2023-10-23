#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while ( t-- ){
		string x1,x2;
		getline(cin,x1);
		getline(cin,x2);
		set <string> a1 , a2;
		stringstream s1(x1);
		stringstream s2(x2);
		string token1 , token2;
		while(s1 >> token1){
			a1.insert(token1);
		}
		while(s2 >> token2){
			a2.insert(token2);
		}
		for(string i : a1){
			if(a2.find(i)==a2.end()){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
