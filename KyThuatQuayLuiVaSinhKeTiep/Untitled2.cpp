#include<bits/stdc++.h> 
using namespace std; 
#define F(i,a,b) for(int i=a; i<=b; i++) 
int i,n,k,a[100]; 
void result() { 
	F(i,1,k) { 
		cout<<a[i]; 
	} 
	cout<<" "; 
} 
void Try(int i) { 
	F(j,a[i-1]+1,n-k+i) { 
		a[i]=j; 
		if(i==k) result(); 
		else Try(i+1); 
	} 
} 

int main() { 
	int t; 
	cin>>t; 
	while(t--) { 
	cin>>n>>k; 
	Try(1); 
	cout<<endl; } }
