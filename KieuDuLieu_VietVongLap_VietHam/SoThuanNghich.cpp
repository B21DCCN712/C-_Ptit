#include<iostream>
using namespace std;

int check(string s){
	int n=s.length();
	int dem=0;
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(check(s)==1) {
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
