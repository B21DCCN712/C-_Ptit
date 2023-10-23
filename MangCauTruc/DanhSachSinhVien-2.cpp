#include <bits/stdc++.h> 
using namespace std;

struct SinhVien{
	string MSV="B20DCCN";
	string name, cl, date;
	float gpa;
};


void nhap(SinhVien a[], int n){
	cin.ignore();
	for(int i=0 ; i<n; i++ ){
		getline(cin,a[i].name);
		for(int j=0; j<a[i].name.size();j++){
			if (a[i].name[j] >='A' && a[i].name[j] <='Z') a[i].name[j] +=32;
		}
		cin >> a[i].cl >> a[i].date >> a[i].gpa;
		cin.ignore();
		if( a[i].date[1] =='/') a[i].date.insert(0,"0");
		if( a[i].date[4] =='/') a[i].date.insert(3,"0");
		
	}
}

void in(SinhVien a[], int n){
	for(int i=0 ; i<n; i++){
		cout << a[i].MSV << setfill('0') << setw(3) << i+1 ;
		cout <<" ";
		stringstream ss(a[i].name);
		string token;
		while(ss >> token){
			token[0] -=32;
			cout << token <<" ";
		}
		cout << a[i].cl << " " << a[i].date << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
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
