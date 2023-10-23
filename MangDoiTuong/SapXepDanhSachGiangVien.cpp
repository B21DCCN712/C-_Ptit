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

string chuanhoaten(string s){
	string temp="";
	int i=s.size()-1;
	while ( s[i] !=' '){
		temp = s[i]+ temp;
		i--;
	}
	return temp;
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

bool cmp(GiangVien a,GiangVien b){
	if ( chuanhoaten(a.name) == chuanhoaten(b.name)) return a.id < b.id ;
	else return chuanhoaten(a.name) < chuanhoaten(b.name);
}


int main(){
    GiangVien ds[1001];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++) cin >> ds[i];
    sort( ds , ds + N , cmp);
	for(i=0;i<N;i++) cout << ds[i];	
    return 0;

}
