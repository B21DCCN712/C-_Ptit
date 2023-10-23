#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv, name, cl, email;
};


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
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout <<"DANH SACH SINH VIEN LOP " << s <<":"<< endl;
		for( int i=0 ; i<n ; i++ ){
			if( a[i].cl ==s ){
				cout << a[i].msv <<" "<< a[i].name <<" "<< a[i].cl <<" "<< a[i].email << endl;
			}
		}
	}
}
