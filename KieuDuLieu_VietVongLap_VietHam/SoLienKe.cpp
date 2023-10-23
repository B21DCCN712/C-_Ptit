#include<iostream>
#include<math.h>
using namespace std;

int check(string s){
	int n=s.size();
	int check=0;
	for(int i=0;i<n-1;i++){
		if(abs(s[i]-s[i+1])==1) {
			check++;
		}
	}
	if(check==n-1) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
