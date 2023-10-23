#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		int dem=0;
		getline(cin,s);
		int n=s.size();
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(s[i]==s[j]) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
