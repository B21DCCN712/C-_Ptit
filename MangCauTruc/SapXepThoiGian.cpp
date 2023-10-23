#include<bits/stdc++.h>
using namespace std;

struct thoigian{
	int gio,phut,giay;
};

bool cmp( thoigian a, thoigian b){
	return a.gio * 3600 + a.phut * 60 + a.giay < b.gio * 3600 + b.phut * 60 + b.giay;
}

void nhap( thoigian a[],int n ){
	for ( int i=0 ; i<n; i++){
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
}

void in( thoigian a[], int n){
	for ( int i=0; i<n; i++ ){
		cout << a[i].gio <<" "<< a[i].phut <<" "<< a[i].giay ;
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	thoigian a[n];
	nhap(a,n);
	sort ( a, a+n, cmp );
	in (a,n);
}
