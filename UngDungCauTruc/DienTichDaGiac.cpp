#include<bits/stdc++.h>
using namespace std;


struct toaDo
{
    double x, y;
};

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        double sum = 0;
        cin >> n;
        toaDo a[n];
        for( int i=0 ; i<n ; i++ ) cin >> a[i].x >> a[i].y;
        --n;
        for( int i=0 ; i<n ; i++ ) sum += (a[i].x * a[i + 1].y - a[i].y * a[i + 1].x);
        sum += (a[n].x * a[0].y - a[n].y * a[0].x);
        cout << setprecision(3) << fixed << sum / 2 << endl;
    }
    return 0;
}
