#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >>n;
		long long a[100001];
		for(int i=1;i<=n;i++) cin >> a[i];
		long long kq=0,gcd;
        if(n > 1) 
        {           
            gcd = abs(a[1]-a[2]);
            for(int i=2;i<=n-1;i++) if(a[i] > 0 && a[i-1] > 0) gcd = __gcd(gcd, abs(a[i]-a[i+1]));

            for(int i=1;i<=sqrt(gcd);i++) if(gcd%i == 0) kq+=2;

            long long m = sqrt(gcd);
            if(m*m == gcd) kq--;
        }

        cout << kq << '\n';
	}
}
