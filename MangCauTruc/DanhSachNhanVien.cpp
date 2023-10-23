#include<bits/stdc++.h>
using namespace std;

struct NhanVien{
	string Mnv,Name,Sex,Date,Adress,Tax,Day;
};


void nhap(NhanVien &A){
	cin.ignore();
	getline(cin,A.Name);
	cin >> A.Sex;
	cin >> A.Date;
	cin.ignore();
	getline(cin,A.Adress);
	cin >> A.Tax;
	cin >> A.Day;
//	if(A.Date[1]=='/') A.Date.insert(0,"0");
//	if(A.Date[4]=='/') A.Date.insert(3,"0");
//	if(A.Day[1]=='/') A.Day.insert(0,"0");
//	if(A.Day[4]=='/') A.Day.insert(3,"0");
}

void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<setfill('0') << setw(5)<<i+1;
		cout <<" "<< ds[i].Name<<" "<<ds[i].Sex<<" "<<ds[i].Date<<" "<<ds[i].Adress<<" "<<ds[i].Tax<<" "<<ds[i].Day << endl;
		}
}

    int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
	}

