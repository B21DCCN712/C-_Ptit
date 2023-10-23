#include<bits/stdc++.h>
using namespace std;


int kq(int a[], int n)
{
    int pre = 0, cur = 0, res = 0; //1 3 5 8 9 2 6 7 6 8 9
    for(int i=0 ; i<n ; i++ )
    {
        if(i > pre)
        {
            ++res;
            pre = cur;
        }
        cur = max(cur, i + a[i]);
    }
    return res;
}
 
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++ ) cin >> a[i];
        cout << kq(a, n) << endl;
    }
    return 0;
}
