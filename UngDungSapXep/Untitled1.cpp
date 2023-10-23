#include<bits/stdc++.h>
#define FOR(i,a,b,k) for (ll i=a;i<=b;i+=k)
#define FORD(i,a,b,k) for (ll i=a;i>=b;i-=k)
#define pb(i) push_back(i)
#define ll long long int
#define all(a) (a).begin(), (a).end()
#define fi first
#define se second
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll MOD=1e9+7;

ll t, n, k, b;
bool a[100001] = {0};
int main()
{   
    cin >> n >> k >> b;
    while(b--) 
    {
        cin >> t;
        a[t] = 1;
    }

    ll i = 1, j = i + k - 1, res, error = 0;
    FOR(h,i,j,1) error+= a[h];
    res = error;

    while(j < n)
    {
        error-=a[i];
        i++;
        j++;
        error+=a[j];
        res = min(res, error);
    }

    cout << res;

    
	return 0;
}
