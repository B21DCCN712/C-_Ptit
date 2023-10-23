#include<bits/stdc++.h>
using namespace std;


string sum(string a,string b){
	while( a.size() < b.size() ){
		a = "0" + a;
	}
	while( b.size() < a.size() ){
		b = "0" + b;
	}
	int n=a.size()-1;			
	int nho=0;
	string kq;
	for(int i=n;i>=0;i--){
		int res= ( b[i]-'0' ) + ( a[i] - '0' ) + nho;
		nho=res/10;
		int temp=res % 10;
		kq=char(temp+'0')+kq;
	}
	if(nho==1) kq="1"+kq;
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

