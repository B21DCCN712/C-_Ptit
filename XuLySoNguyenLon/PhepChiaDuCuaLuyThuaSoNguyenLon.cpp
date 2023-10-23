#include<bits/stdc++.h>
using namespace std;


long long t, m, n;
string s;
long long ModuleBigNum(string s, long long m) 
{
    long long res = 0;
    int n=s.size();
    for(int i=0;i<n;i++) res = (res * 10 + s[i] - '0') % m;
    return res;
}

long long ModulePowBigNum(string s, long long n)  
{
    if(n == 0) return 1;

    long long res = ModulePowBigNum(s, n/2) % m;

    if(n%2 == 0) return res * res % m;
    return (res * res % m) * ModuleBigNum(s, m) % m; 
}

int main()
{   
    cin >> t;
    while(t--)
    {
        cin >> s >> n >> m;
        cout << ModulePowBigNum(s,n) << '\n';
    }
    
    
	return 0;
}
