#include<bits/stdc++.h>
using namespace std;


string chuanhoa(string s){
	for(int i=0; i<s.size(); i++ ){
		if( s[i] >='A' && s[i] <= 'Z') s[i] +=32;
	}
	string kq="";
	stringstream token(s);
	string s1;
	vector <string> s2;
	while(token >> s1){
		s1[0] -=32;
		kq += s1;
		kq +=' ';
	}
	return kq;
}
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
			out << "B20DCCN001" <<" "<< chuanhoa(a.name) << a.cl <<" " << a.date<<" ";
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
