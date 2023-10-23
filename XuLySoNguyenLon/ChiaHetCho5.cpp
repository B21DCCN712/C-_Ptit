#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int n=s.size();
	int du=0;
	for(int i=n-1;i>=0;i--){
//		s[i] -= '0';
		if(s[i]=='1'){
			if((n-1-i)%4==0) du+=1;
			else if((n-1-i)%4==1) du+=2;
			else if((n-1-i)%4==2) du+=4;
			else if((n-1-i)%4==3) du+=3;
		}
	}
	if(du % 5 ==0) return 1;
	return 0; 
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"Yes"<<endl;
		}else cout<<"No"<<endl;
	}
}
