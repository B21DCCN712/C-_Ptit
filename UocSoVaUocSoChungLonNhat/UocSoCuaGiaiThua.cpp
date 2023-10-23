#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int N,p;
		cin>>N>>p;
		int count=0,temp;
		int i=1;
		while(i*p<=N){
			temp=p*i;
			while(temp%p==0){
				count+=1;
				temp /=p;
			}
			i++;
		}
		cout<<count<<endl;
	}
}
