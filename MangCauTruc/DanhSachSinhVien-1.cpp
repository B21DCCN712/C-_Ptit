#include <bits/stdc++.h> 
using namespace std; 

struct SinhVien{
	string msv , name , cl , date ;
	double gpa ;
};

void nhap1(SinhVien &a){			
		getline(cin,a.name);
		cin >> a.cl >> a.date >> a.gpa ;
		cin.ignore();
}


void chuanhoangay(SinhVien &A)
{
    if (A.date[1] == '/')
        A.date = "0" + A.date;
    if (A.date[4] == '/')
        A.date.insert(3, "0");
}


void in1(SinhVien a){
		chuanhoangay(a);
		cout << a.name <<" "<< a.cl << " " << a.date <<" " ;
		cout <<  fixed << setprecision(2) << a.gpa << endl ;
}

void nhap(SinhVien a[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		nhap1(a[i]);
	}
}
void in(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cout << "B20DCCN" ;
		cout << setfill('0') << setw(3) << i+1 <<" ";
		in1(a[i]);
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
