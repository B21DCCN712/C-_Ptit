#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string msv, name, cl, email;
	public:
		friend istream &operator>>( istream &in, SinhVien &a){
			getline(cin, a.msv);
			getline(cin, a.name);
			getline(cin, a.cl);
			getline(cin, a.email);
			return in;
		}
		friend ostream &operator<<( ostream &out, SinhVien &a){
			out << a.msv <<" "<< a.name <<" "<< a.cl <<" "<< a.email;
			out << endl;
			return out;
		}
};

string nganh(string s){
	stringstream token(s);
	string s1;
	string tmp="";
	while(token >> s1){
		tmp += toupper(s1[0]);
	}
	return tmp.substr(0,2);
}

int main(){
    SinhVien ds[1001];
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
    	for(int i=0 ; i<s.size() ; i++){
    		s[i]= toupper(s[i]);
		}
		cout << "DANH SACH SINH VIEN NGANH "<< s <<":"<< endl;
		for( int i=0 ; i<N ; i++ ){
			if( nganh(s)=="AT" || nganh(s) =="CN"){
				if ( ds[i].cl[0] !='E' && nganh(s) == ds[i].msv.substr(5,2)) cout << ds[i];
			}
			else if( nganh(s) == ds[i].msv.substr(5,2) ) cout << ds[i];
		}
	}
    	
    return 0;
}
