#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,name,lop,email;
};

bool ss(SinhVien a,SinhVien b){
	return a.msv < b.msv;
}

SinhVien a[1000];

int main(){
	long long n=0;
	while(cin >> a[++n].msv){
		scanf("\n");
		getline (cin ,a[n].name);
		cin >> a[n].lop >> a[n].email;
	}
	sort(a+1,a+n+1,ss);
	for(int i=1;i<n+1;i++){
		cout << a[i].msv <<" " << a[i].name << " "<< a[i].lop << " " << a[i].email << endl;
	}
}
