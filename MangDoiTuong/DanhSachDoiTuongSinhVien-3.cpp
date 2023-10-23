#include<bits/stdc++.h>
using namespace std;

string chuanhoa( string s){
	for(int i=0 ; i<s.size() ; i++){
		if( s[i] >='A' && s[i] <='Z') s[i] +=32;
	}
	string kq="";
	stringstream token(s);
	string s1;
	while( token >> s1 ){
		s1[0] -=32;
		kq += s1 ;
		kq +=" ";
	}
	return kq;
}
int cnt=1;
class SinhVien{
	public:
		int id;
		string msv, name, cl, date;
		float gpa;
	public:
		friend istream &operator>>( istream &in, SinhVien &a){
			cin.ignore();
			a.id = cnt++;
			getline(in, a.name);
			in >> a.cl >> a.date >> a.gpa;
			if( a.date[1] == '/') a.date.insert(0,"0");
			if( a.date[4] == '/') a.date.insert(3,"0");		
			return in;			
		}
		friend ostream &operator<<( ostream &out, SinhVien a){
			out << "B20DCCN" << setfill('0') << setw(3) << a.id;
			cout <<" "<< chuanhoa(a.name)  << a.cl <<" "<< a.date<<" ";
			cout << fixed << setprecision(2) << a.gpa;
			cout << endl;
			return out;			
		}
};

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
