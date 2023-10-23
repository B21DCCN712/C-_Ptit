#include<bits/stdc++.h>
using namespace std;

string a,b;
string mul(string &a, string &b)
{
    string res = "";
    int n = a.length();
    int m = b.length();
    int len = n + m - 1;
    int rmb = 0;
    for(int i=len; i>=0 ; i--)
    {
        int tmp = 0;
        for(int j=n-1; j>=0 ; j-- )
            if(i - j <= m && i - j >= 1)
            {
                int a1 = a[j] - '0';
                int b1 = b[i - j - 1] - '0';
                tmp += a1 * b1;
            }
            tmp += rmb;
            rmb = tmp / 10;
            res = (char)(tmp % 10 + '0') + res;
    }
    while(res.length() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}

void solve()
{
    string res = "";
    if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-'))
    {
        if (a[0] == '-') a.erase(0, 1);
        if (b[0] == '-') b.erase(0, 1);
        res += "-";
        res = mul(a, b);
    }
    else
    {
        if (a[0] == '-') a.erase(0, 1);
        if (b[0] == '-') b.erase(0, 1);
        res = mul(a, b);
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    	cin >> a >> b;
		solve();
	}
    return 0;
}
