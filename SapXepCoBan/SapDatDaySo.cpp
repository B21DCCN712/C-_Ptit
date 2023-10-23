#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	long long n;
    	cin>>n;
    	long long a[n],b[n];
    	for(long long i=0;i<n;i++){
    		cin>>a[i];
    		b[i]=-1;
		}
		sort(a,a+n);
		for(long long i=0;i<n;i++){
			for(long long j=0;j<n;j++){
				if(a[j]==i) b[i]=i;
			}
		}
		for(long long i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
