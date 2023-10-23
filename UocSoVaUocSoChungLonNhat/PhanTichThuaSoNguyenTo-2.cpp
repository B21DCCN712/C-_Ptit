#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		int count=0;
		if(n%i==0){
			while(n%i==0){
			count++;
			n/=i;
		}
		cout<<i<<" "<<count<<endl;
	}
	}
	if(n>1) cout<<n<<" 1";
}
