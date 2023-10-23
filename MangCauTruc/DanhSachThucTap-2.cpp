#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	int id;
	string msv, name, cl, email, doanhnghiep;
};

int cnt=1;
void nhap(SinhVien &a){
	a.id=cnt++;
//	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.name);
	getline(cin,a.cl);
	getline(cin,a.email);
	getline(cin,a.doanhnghiep);
}

void in(SinhVien &a){
	cout << a.id <<" "<< a.msv <<" "<< a.name <<" "<< a.cl <<" "<< a.email <<" "<< a.doanhnghiep << endl;
}

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}


int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	cin.ignore();
	for( int i=0 ; i<n ; i++ ){
		nhap(a[i]);
	}
	sort(a,a+n,cmp);
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		cin >> s;
		for(int i=0 ; i<n ; i++ ){
			if ( a[i].doanhnghiep == s){
				in(a[i]);
			}
		}
	}
}
