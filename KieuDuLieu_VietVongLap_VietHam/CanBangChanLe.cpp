#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
	int check=0;
	while(n!=0){
		int m=n%10;
		if(m%2==0){
			check++;
		}else check--;
		n/=10;
	}
	if(check==0 ) return 1;
	return 0;
}

int main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=pow(10,n-1);i<pow(10,n);i++){
		if(check(i)){
			cout<<i<<" ";
			dem++;
		}
		if(dem==10){
			cout<<endl;
			dem=0;
		}
	}
}
