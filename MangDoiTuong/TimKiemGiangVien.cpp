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

string chuanhoa1(string s){
	stringstream token(s);
	string s1;
	string tmp="";
	while(token >> s1){
		for( int i=0 ; i<s1.size();i++) s1[i]=tolower(s1[i]);
		tmp += s1;
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
    	cout <<"DANH SACH GIANG VIEN THEO TU KHOA " << s <<":" << endl;
    	for(int i=0 ; i<s.size();i++) s[i] = tolower(s[i]);
    	stringstream token(s);
    	string s1;
    	vector<string> v;
    	while(token >> s1) v.push_back(s1);
    	for(int i=0 ; i<N ; i++){
    		string newname= chuanhoa1(ds[i].name);
    		for( int j=0 ; j<v.size() ; j++){
    			if( newname.find(v[j]) != -1){
    				cout << ds[i] ;
    				break;
				}
			}
		}
	}
    return 0;

}

