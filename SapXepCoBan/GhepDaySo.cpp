#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int m=a*b;
		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		sort(arr,arr+m);
		for(int i=0;i<m;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
