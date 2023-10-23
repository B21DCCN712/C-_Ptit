#include<bits/stdc++.h>
using namespace std;

int tmp=1;

string chuanhoa(string s){
	stringstream token(s);
	string s1;
	string tmp="";
	while(token >> s1){
		tmp += toupper(s1[0]);
	}
	return tmp;
}


class GiangVien{
	public:
		int id;
		string name, job;
	public:
		friend istream &operator>>( istream &in, GiangVien &a){
			a.id = tmp ++;
			getline(cin, a.name);
			getline(cin, a.job);
			return in;
		}
		friend ostream &operator<<( ostream &out, GiangVien &a){
			out << "GV" << setfill('0') << setw(2) << a.id <<" ";
			out << a.name <<" "<< chuanhoa(a.job);
			out << endl;
			return out;
		}
};


int main(){
    GiangVien ds[1001];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> ds[i];
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	getline(cin,s);
    	cout <<"DANH SACH GIANG VIEN BO MON " << chuanhoa(s) <<":" << endl;
    	for(int i=0 ; i<N ; i++){
    		if ( s == ds[i].job ) cout << ds[i];
		}
	}
    return 0;

}
