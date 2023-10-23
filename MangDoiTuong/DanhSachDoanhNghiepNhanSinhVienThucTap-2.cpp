#include<bits/stdc++.h>
using namespace std;


class dn{
	public:
		int number;
		string mdn, name;
	public:
		friend istream &operator>>( istream &in, dn &a){
			getline(cin, a.mdn);
			getline(cin, a.name);
			in >> a.number ;
			cin.ignore();
			return in;
		}
		friend ostream &operator<<( ostream &out, dn &a){
			out << a.mdn <<" "<< a.name <<" "<< a.number << endl;
			return out;
		}
};

bool cmp( dn a, dn b){
	if ( a.number == b.number ) return a.mdn < b.mdn;
	else return a.number > b.number ;
}
int main(){
    dn ds[1001];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> ds[i];
    sort( ds, ds+N, cmp );
    int t;
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b <<" SINH VIEN:" << endl;
    	for(int i=0 ; i<N ; i++){
    	if ( ds[i].number >= a && ds[i].number <= b) cout << ds[i];
	}
	}
    return 0;
}
