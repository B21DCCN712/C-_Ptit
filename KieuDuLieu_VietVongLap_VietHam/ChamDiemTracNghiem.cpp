#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char a[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'}; 
	char b[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	int n;
	cin>>n;
	while(n--){
		int n;
		cin>>n;
		char c[15];
		double diem=10;
		for(int i=0;i<15;i++){
			cin>>c[i];
		}
		if(n==101){
			for(int i=0;i<15;i++){
				if(c[i] != a[i]) diem=diem-(double)10/15;
			}
		}else if(n==102){
		for(int i=0;i<15;i++){
				if(c[i] != b[i]) diem=diem-(double)10/15;
			}	
		}
		cout<<fixed<<setprecision(2)<<diem<<endl;
	}
	
}
