#include<bits/stdc++.h>
using namespace std;

int MaHoa(string s){
	int n=s.length();
	int count=1;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]) count++;
		else {
			cout<<s[i]<<count;
			count=1;
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		MaHoa(s);
		cout<<endl;
	}
}
