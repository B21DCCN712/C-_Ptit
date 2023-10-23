#include <bits/stdc++.h> 
using namespace std;

struct SinhVien{
	string MSV;
	string name, cl, date;
	float gpa;
};

void chuanhoadate(SinhVien &a){
	if( a.date[1] =='/') a.date.insert(0,"0");
	if( a.date[4] =='/') a.date.insert(3,"0");
}

void chuanhoaname(SinhVien &a){
	for(int j=0; j<a.name.size();j++){
			if (a.name[j] >='A' && a.name[j] <='Z') a.name[j] +=32;
		}
		stringstream ss(a.name);
		string token;
		while(ss >> token){
			token[0] -=32;
			cout << token <<" ";
		}
}
void nhap(SinhVien a[], int n){
	cin.ignore();
	for(int i=0 ; i<n; i++ ){
		getline(cin,a[i].name);
		cin >> a[i].cl >> a[i].date >> a[i].gpa;
		if(i<9) a[i].MSV="B20DCCN00";
		else a[i].MSV="B20DCCN0";
		a[i].MSV=a[i].MSV+to_string(i+1);
		cin.ignore();
	}
}

void in(SinhVien a[], int n){
	for(int i=0 ; i<n; i++){
		chuanhoadate(a[i]);
		cout << a[i].MSV ;
		cout <<" ";
		chuanhoaname(a[i]);
		cout << a[i].cl << " " << a[i].date << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
		cout << endl;
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
