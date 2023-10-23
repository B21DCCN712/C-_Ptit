#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string Mnv,Name,Sex,Date,Adress,Tax,Day;
};


void nhap(NhanVien &A){
	getline(cin,A.Name);
	getline(cin,A.Sex);
	getline(cin,A.Date);
	getline(cin,A.Adress);
	getline(cin,A.Tax);
	getline(cin,A.Day);
	if(A.Date[1]=='/') A.Date.insert(0,"0");
	if(A.Date[4]=='/') A.Date.insert(3,"0");
	if(A.Day[1]=='/') A.Day.insert(0,"0");
	if(A.Day[4]=='/') A.Day.insert(3,"0");
}

void in(NhanVien A){
	cout<<"00001 "<<A.Name<<" "<<A.Sex<<" "<<A.Date<<" "<<A.Adress<<" "<<A.Tax<<" "<<A.Day;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

