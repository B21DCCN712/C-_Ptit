#include<bits/stdc++.h>
using namespace std;


class NhanVien{
	private:
		string mvn,name,sex,date,dress,tax,day;
	public:
		void nhap(){
			getline(cin,name);
			cin >> sex >> date;
			cin.ignore();
			getline(cin,dress);
			cin >> tax >> day ;
		}
		void xuat(){
			cout << "00001" << " " << name << " " << sex << " " << date << " " << dress << " "<<tax<<" "<<day;
		}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
