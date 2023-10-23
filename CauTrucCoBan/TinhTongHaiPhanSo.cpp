#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
	long long a,b;
};


void nhap(PhanSo &A){
	cin>>A.a>>A.b;
}


void in(PhanSo A){
	cout<<A.a<<"/"<<A.b;
}


void rutgon(PhanSo &A){
	long long p=__gcd(A.a,A.b);
	A.a /= p;
	A.b /= p;
}


PhanSo tong(PhanSo A,PhanSo B){
	struct PhanSo C;
	C.a=A.a * B.b + A.b * B.a;
	C.b=A.b * B.b;
	rutgon(C);
	return C;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
