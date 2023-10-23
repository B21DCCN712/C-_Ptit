#include <bits/stdc++.h> 
using namespace std;

struct item{
	int id;
	string name, group;
	double buy, sell;
};

bool cmp(item a, item b){
	return a.sell-a.buy > b.sell-b.buy;
}

int main(){
	int n;
	cin >> n;
	struct item a[10000];
	for(int i=0;i<n;i++){
		cin.ignore();
		a[i].id = i+1;
		getline(cin, a[i].name);
		getline(cin, a[i].group);
		cin >> a[i].buy >> a[i].sell;
	}
	sort( a , a + n , cmp );
	for(int i=0 ; i < n ; i++){
		cout << a[i].id << " " << a[i].name << " " << a[i].group <<" ";
		cout << fixed << setprecision(2) << a[i].sell - a[i].buy;
		cout << endl;
	}
	return 0;
}


