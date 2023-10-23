#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	int a[10];
	a[0]=s[5] -'0';
	a[1]=s[6] -'0';
	a[2]=s[7] -'0';
	a[3]=s[9] -'0';
	a[4]=s[10]-'0';
	
	int dem=0;
	for(int i=0;i<4;i++){
		if(a[i]<a[i+1]) dem++;
	}
	if(dem==4) return true;
	
	for(int i=0;i<=4;i++){
		if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3] && a[3]==a[4]) return true ;
	}
	
	for(int i=0;i<=4;i++){
		if (a[0]==a[1] && a[1]==a[2] && a[3]==a[4]) return true ;
	}
	
	int dem2=0;
	for(int i=0;i<=4;i++){
		if (a[i]==6 || a[i] == 8) dem2++ ;
		if (dem2==5) return true ;
	}
	
	return false ;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(check(s)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
}
