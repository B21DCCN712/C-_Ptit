#include<bits/stdc++.h>
using namespace std;


class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo( long long a, long long b ){
			tu = a;
			mau = b;
		}
		friend istream &operator>>( istream &in, PhanSo &A){
			in >> A.tu;
			in >> A.mau;
			return in;
		}
		void rutgon(){
				long long t =__gcd( tu, mau );
				tu /= t;
				mau /= t;
		}
		friend ostream &operator<<( ostream &out, PhanSo A){
			out << A.tu <<"/" << A.mau;
			return out;
		}
};


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
