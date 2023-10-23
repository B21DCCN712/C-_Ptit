#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    set <string> s1;
    for(int i=0;i<n;i++){
        string a;
        getline(cin,a);
        s1.insert(a);
    }
    cout<< s1.size();
}
