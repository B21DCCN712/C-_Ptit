#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	int a[100];
	a[0]=0,a[1]=1,a[2]=2;
	for(int i=3;i<=20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(t--){
		int n;
		cin>>n;
		int s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=20;j++){
				if(s[i]==a[j]){
					cout<<s[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
}
