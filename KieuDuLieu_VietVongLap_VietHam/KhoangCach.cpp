#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double khoangcach=sqrt((a-c)*(a-c) +(b-d)*(b-d));
	cout<<setprecision(4)<<fixed<<khoangcach<<endl;
}
}
