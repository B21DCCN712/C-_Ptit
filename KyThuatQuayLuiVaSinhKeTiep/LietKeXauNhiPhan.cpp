#include<bits/stdc++.h>
using namespace std;

long long x[50]={0};
void Print(long long n)
{
    for(int i=1;i<=n;i++) cout << x[i];
    cout << " ";
}

void Logic(long long i, long long n)
{
    for(int j=0;j<=1;j++) 
    {
        x[i] = j;

        if(i == n) Print(n);      
        else if(i < n) Logic(i+1, n);
    }
}

int main()
{   
	int t;
    cin >> t;
    while(t--)
    {
    	int n;
        cin >> n;
        Logic(1, n);
        cout << '\n';
    }
    
    
	return 0;
}
