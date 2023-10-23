#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string Msv,Name,cl,date;
	float gpa;
};


void nhap(SinhVien &A){
	getline(cin,A.Name);
	getline(cin,A.cl);
	getline(cin,A.date);
	cin>>A.gpa;
	if(A.date[1]=='/') A.date.insert(0,"0");
	if(A.date[4]=='/') A.date.insert(3,"0");
}

void in(SinhVien A){
	cout<<"B20DCCN001 "<<A.Name<<" "<<A.cl<<" "<<A.date<<" "<<fixed<<setprecision(2)<<A.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

