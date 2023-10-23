#include<bits/stdc++.h>
using namespace std;
int num(string s)
{
    if(s.length() > 9) return 0;
    long long n = 0;
    for(char i : s)
    {
        if(!isdigit(i)) return 0;
        n = n * 10 + i - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}

int main()
{
    ifstream filein("DATA.in");
    string s;
    long long sum = 0;
    while(filein >> s) sum += num(s);
    cout << sum;
  }
