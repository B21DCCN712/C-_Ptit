#include<bits/stdc++.h>
using namespace std;

int cnt=1;
class SinhVien{
	private:
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
			cout <<" "<< a.name <<" " << a.cl <<" "<< a.date<<" ";
			cout << fixed << setprecision(2) << a.gpa;
			cout << endl;
			return out;			
		}
};


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
