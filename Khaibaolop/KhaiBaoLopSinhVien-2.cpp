#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv, name, cl, date;
		float gpa;
	public:
		friend istream &operator>>( istream &in, SinhVien &a){
			getline( in, a.name );
			getline( in, a.cl );
			getline( in, a.date );
			if(a.date[1]=='/') a.date.insert(0,"0");
			if(a.date[4]=='/') a.date.insert(3,"0");
			in >> a.gpa;
			return in;
		}
		friend ostream &operator<<( ostream &out,SinhVien a){
			out << "B20DCCN001" <<" "<< a.name <<" "<< a.cl <<" " << a.date<<" ";
			out << fixed << setprecision(2) << a.gpa;
			return out;		
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
