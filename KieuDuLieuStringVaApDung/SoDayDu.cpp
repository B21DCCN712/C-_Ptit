#include<bits/stdc++.h>
using namespace std;

void check(string s){
	int n=s.size();
	int check=1;
	for(int i=0;i<n;i++){
		if(s[i]<48 || s[i]>57 || s[0]=='0') {
			check=0;	
		}
	}
		if(check==0){
			cout<<"INVALID";
		}else{
		int m=0,dem=0;
		while(m<10){
			for(int i=0;i<n;i++){
				if(s[i]-'0'==m){
					dem++;
					break;
				}
			}
			m++;
		}
		if(dem==10){
			cout<<"YES";
		}else cout<<"NO";
		}
}


int main(){
	int t;
	cin>>t;
//	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		check(s);
		cout<<endl;
	}
}
