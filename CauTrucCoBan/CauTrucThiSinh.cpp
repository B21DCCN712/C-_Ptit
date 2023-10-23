#include<bits/stdc++.h>
using namespace std;


struct ThiSinh {
	string name;
	string ns;
	float a,b,c,sum;
};

void nhap(ThiSinh &A){
	getline(cin,A.name);
	cin>>A.ns;
	cin>>A.a>>A.b>>A.c;	
	if ( A.ns[1]=='/' ) A.ns.insert(0,"0");
	if ( A.ns[4]=='/' ) A.ns.insert(3,"0");	
}


void in(ThiSinh A){
	cout<<A.name<<" ";
	cout<<A.ns<<" ";
	A.sum=A.a+A.b+A.c;
	cout<<fixed<<setprecision(1)<<A.sum;
}


int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
