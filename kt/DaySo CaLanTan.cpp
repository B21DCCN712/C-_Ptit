#include <bits/stdc++.h>
using namespace std;
const int max1 = 2e5 + 5;
int  s[max1];
int a[max1], res;
void add(int x, int delta)
{
	for (int i = 2; i * i <= x; i++){
		while (x % i == 0){
			s[i] += delta;
			x /= i;
		}
	}
	if (x != 1)
		s[x] += delta;
}
void mul(int x)
{
	res += 5;
	for (int i = 0; i < res; i++)
		a[i] *= x;
	for (int i = 0; i < res; i++){
		a[i + 1] += a[i] / 10;
		a[i] %= 10;
	}
	while (res > 0 && !a[res - 1])
		res--;
}

int main()
{
	int n;
	cin >> n;
	n++;
	for (int i = 1; i <= n; i++)
		add(2 * n - i + 1, 1);
	for (int i = 1; i <= n + 1; i++)
		add(i, -1);
	a[0] = res = 1;
	for (int i = 1; i < max1; i++)
		while (s[i]--)
			mul(i);
	for (int i = res - 1; i >= 0; i--)
		cout << a[i];
	cout << endl;
}
