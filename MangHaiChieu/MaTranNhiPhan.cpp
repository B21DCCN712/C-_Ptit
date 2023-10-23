#include<bits/stdc++.h>
using namespace std;

int main(){
		int n;
		cin>>n;
		int a[1005][3];
		int sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			int dem=0;
			for(int j=0;j<3;j++){
				if(a[i][j]==0) dem--;
				else dem++;
			}
			if(dem>0) sum++;
		}
		cout<<sum;
}
