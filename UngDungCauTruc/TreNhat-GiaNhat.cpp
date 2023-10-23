#include<bits/stdc++.h>
using namespace std;

struct person{
	string name;
	string date;
};

bool cmp( person a, person b ){
	string p="",q="";
	p += a.date.substr(6,4);
	p += a.date.substr(3,2);
	p += a.date.substr(0,2);
	q += b.date.substr(6,4);
	q += b.date.substr(3,2);
	q += b.date.substr(0,2);
	return p > q;
}

void nhap( person a[], int n ){
	for ( int i=0 ; i<n ; i++ ){
		cin >> a[i].name >> a[i].date;
	}
}
void in( person a[], int n ){
	for ( int i=0; i<n ; i++ ){
		cout << a[i].name << endl;
	}
}

int main(){
	int n;
	cin >> n;
	person a[n];
	nhap(a,n);
	sort( a, a+n, cmp );
	cout << a[0].name << endl << a[n-1].name;
}
