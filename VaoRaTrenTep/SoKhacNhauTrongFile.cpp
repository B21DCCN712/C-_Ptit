#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream file;
	file.open("DATA.in");
	int x;
	map<int,int> s;
	while(file >> x){
		s[x]++;
	}
	for( auto i : s){
		cout << i.first <<" " << i.second << endl;
	}
	file.close();
}
