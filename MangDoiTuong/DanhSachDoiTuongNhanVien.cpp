#include<bits/stdc++.h>
using namespace std;

int cnt=1;
class NhanVien{
	private:
		int id;
		string name, sex, date, address, tax, day;
	public:
		friend istream &operator>>( istream &in, NhanVien &a){
			if (cnt ==1 )in.ignore();
			a.id=cnt++;
			getline(cin, a.name);
			getline(cin, a.sex);
			getline(cin, a.date);
			getline(cin, a.address);
			getline(cin, a.tax);
			getline(cin, a.day);
			return in;
		}
		friend ostream &operator<<( ostream &out, NhanVien &a){
			out << setfill('0') << setw(5) << a.id <<" ";
			out << a.name <<" "<< a.sex <<" "<< a.date <<" "<< a.address <<" "<< a.tax <<" "<<a.day;
			out << endl;
			return out;
		}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
