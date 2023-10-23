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
		PhanSo(){
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
		
		PhanSo operator +( PhanSo b  ){
			PhanSo c;
			c.mau = this->mau * b.mau ;
			c.tu = this->tu * b.mau + b.tu * this->mau;
			c.rutgon();
			return c;
		}
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
