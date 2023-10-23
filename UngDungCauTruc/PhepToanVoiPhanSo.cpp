#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	long long tu,mau;
};

void rutgon(PhanSo &A){
	long long t=__gcd( A.tu, A.mau );
	A.mau = A.mau / t;
	A.tu = A.tu / t;
}

void process(PhanSo A, PhanSo B){
	PhanSo C;
	PhanSo D;
	C.tu = pow( A.tu * B.mau + B.tu * A.mau , 2 );
	C.mau = pow( A.mau * B.mau , 2 );
	rutgon(C);
	cout << C.tu <<"/" << C.mau <<" ";
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	rutgon(D);
	cout << D.tu << "/" << D.mau;
	cout << endl;
	
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
