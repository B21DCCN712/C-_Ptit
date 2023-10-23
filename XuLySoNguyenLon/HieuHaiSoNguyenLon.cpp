#include<bits/stdc++.h>
using namespace std;


string sum(string a,string b){
	while( a.size() < b.size() ){
		a = "0" + a;
	}
	while( b.size() < a.size() ){
		b = "0" + b;
	}
	if(a>b) swap(a,b);
	int n=a.size()-1;			
	int nho=0;
	string kq;
	for(int i=n;i>=0;i--){
		int res= ( b[i]-'0' ) - ( a[i] - '0' ) - nho;
		if ( res < 0) {
			kq = char(res + 10 +'0') + kq;
			nho=1;
		}else {
			kq= char(res +'0') + kq;
			nho=0;
		}
	}
	return kq;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		cout<<sum(a,b)<<endl;
	}
}

