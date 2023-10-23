#include<bits/stdc++.h>
using namespace std;

int a[50];
bool kt[50]={0};
int n;
void display(){
	for( int i=1 ; i<=n ; i++ ){
		cout << a[i];
	}
}

void Logic(long long i)
{
    for(int j=1 ; j<=n ; j++) 
    {
        if(kt[j] == 0)
        {
            a[i] = j;

            if(i == n) 
            {
                display();
                cout << " ";
            }
            else if(i < n)
            {
                kt[j] = 1;
                Logic(i+1);             
                kt[j] = 0;
            }
        }
    }
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Logic(1);
		cout << endl;
	}
}
