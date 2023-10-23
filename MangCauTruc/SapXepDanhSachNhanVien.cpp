#include <bits/stdc++.h> 
using namespace std;

int temp=1;
struct NhanVien{
	int id;
	string name, sex, date, address, tax, day;
};

bool cmp(NhanVien A, NhanVien B){
	string a=A.date.substr(6,4);
	string b=B.date.substr(6,4);
	a += A.date.substr(0,2);
	a += A.date.substr(3,2);
	b += B.date.substr(0,2);
	b += B.date.substr(3,2);
	return a<b;
}

void nhap(NhanVien &a){
		a.id = temp++ ;
		cin.ignore();	
		getline(cin, a.name);
		cin >> a.sex >> a.date;
		cin.ignore();
		getline(cin , a.address);
		cin >> a.tax >> a.day;	
	}


void inds(NhanVien a[],int n){
	for(int i=0 ; i<n ; i++ ){
		cout << setfill('0') << setw(5) << a[i].id;
		cout << " " << a[i].name << " " << a[i].sex << " " << a[i].date << " " ;
		cout << a[i].address<< " "  << a[i].tax<< " " << a[i].day;
		cout << endl;
	}
}

void sapxep(NhanVien a[],int n){
	sort(a, a+n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

