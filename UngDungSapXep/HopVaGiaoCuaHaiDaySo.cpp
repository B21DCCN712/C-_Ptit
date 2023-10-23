#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		int a[m+5], b[n+5];
		set<int> s1;
		set<int> s2;
		for (int i = 1; i <= m; i++)
		{
			cin >> a[i];
			s1.insert(a[i]);
		}
		int k = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
			s1.insert(b[i]);
			if (m + i - s1.size() != k)
			{
				s2.insert(b[i]);
				k++;
			}
		}
		for (int x : s1) cout << x << " ";
		cout << endl;
		for (int y : s2) cout << y << " ";
		cout << endl;
	}
}
