#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238

struct point{
	double x,y;
};

double len( point a, point b){
	return sqrt( (a.x - b.x ) * (a.x - b.x ) + ( a.y - b.y ) * ( a.y - b.y ) );
}

int main(){
	int t;
	cin >> t;
	while(t--){
		point a,b,c;
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		double AB,BC,CA;
		AB= len(a,b);
		BC= len(b,c);
		CA= len(c,a);
		if( AB+BC>CA && AB+CA>BC && BC+CA>AB ){
		double p=(AB+BC+CA)/2;
		double S= sqrt( p * (p-AB) * (p-BC) * ( p-CA) );
		double R=  (AB*BC*CA) / ( 4 * S);
		double s= PI * R * R;
		cout << fixed << setprecision(3) << s;
		cout << endl;
		}
		else cout <<"INVALID\n";
	}
}
