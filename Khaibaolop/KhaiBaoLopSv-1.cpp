#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv , name , lop , date;
		float gpa;
	public:
		void nhap(){
			getline(cin,name);
			getline(cin,lop);
			getline(cin,date);
			cin >> gpa;
			if(date[1]=='/') date.insert(0,"0");
			if(date[4]=='/') date.insert(3,"0");
		}
		void xuat(){
			cout <<"B20DCCN001" << " " << name <<" "<< lop <<" "<< date << " " << fixed<< setprecision(2)<< gpa;
		}
		
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
