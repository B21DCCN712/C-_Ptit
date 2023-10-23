#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
	long long a,b;
};

void nhap(PhanSo &A){
	cin>>A.a>>A.b;
}

void rutgon(PhanSo &A){
	long long p=__gcd(A.a,A.b);
	A.a /= p;
	A.b /= p;
}

void in(PhanSo A){
	cout<<A.a<<"/"<<A.b;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
