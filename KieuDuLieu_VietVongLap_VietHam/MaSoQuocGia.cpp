#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		int res=s1.find("084");
		string s2=s1.erase(res,3);
		cout<<s2<<endl;
	}
}
