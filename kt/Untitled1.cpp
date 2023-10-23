#include<bits/stdc++.h>
using namespace std;

string chuanhoaname(string s){
	string kq="";
	for(int i=0 ; i<s.size() ; i++) s[i]= tolower(s[i]);
	stringstream token(s);
	string tmp;
	while(token >> tmp){
		tmp[0] -=32 ;
		kq += tmp ;
		kq += " ";
	}
	return kq;
}
int res=1;
class SinhVien{
	private:
		string  name, cl, date;
		int msv;
		double gpa;
	public:
		double getgpa(){
			return gpa;
		}
		friend istream &operator>>( istream &in, SinhVien &a){
			cin.ignore();
			a.msv = res++;
			getline(in, a.name);
			getline(in, a.cl);
			getline(in, a.date);
			in >> a.gpa;
			if(a.date[1] =='/') a.date.insert(0,"0");
			if(a.date[4] =='/') a.date.insert(3,"0");
			return in;	
		}
		friend ostream &operator<<( ostream &out, SinhVien &a){
			out << "B20DCCN" << setfill('0') << setw(3) << a.msv <<" ";
			out <<" ";
			out << chuanhoaname(a.name) << a.cl <<" " << a.date <<" " << fixed<< setprecision(2) << a.gpa << endl;
			return out;	
		}	
	};
bool cmp( SinhVien a, SinhVien b){
	return a.getgpa() > b.getgpa();
}
int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	for( int i=0 ; i<n ; i++ ) cin >> ds[i];
	sort(ds,ds+n,cmp);
	for(int i=0 ; i<n ; i++) cout << ds[i];
}
