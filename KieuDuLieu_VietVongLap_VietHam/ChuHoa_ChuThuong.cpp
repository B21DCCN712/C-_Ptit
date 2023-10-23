#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();
	while(n--){
		char s;
		cin>>s;
		if(s>=97&&s<=122) s=s-32;
		else s=s+32;
		cout<<s<<endl;
	}
}
