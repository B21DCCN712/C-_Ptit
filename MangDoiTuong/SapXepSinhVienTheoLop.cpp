#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv, name, cl, email;
};

bool cmp(SinhVien a, SinhVien b){
	if( a.cl != b.cl) return a.cl < b.cl;
	else return a.msv < b.msv;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien a[1000];
	for(int i=0 ; i<n; i++){
		getline(cin , a[i].msv);
		getline(cin , a[i].name);
		getline(cin , a[i].cl);
		getline(cin , a[i].email);
	}
	sort(a, a+n, cmp);
	for(int i=0 ; i<n ; i++){
		cout << a[i].msv <<" "<< a[i].name <<" "<< a[i].cl <<" "<< a[i].email << endl;
	}
}
