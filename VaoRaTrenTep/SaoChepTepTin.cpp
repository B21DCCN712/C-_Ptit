#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream inp, out;
    inp.open("PTIT.in", ios::in);
    out.open("PTIT.out", ios::out);
    string s;
    while(inp >> s) 
	out << s << endl;
      return 0;
}
