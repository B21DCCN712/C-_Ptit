#include<bits/stdc++.h> 
using namespace std; 

bool Check( string s){
	if ( s.size() == 1) return 0;
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	return tmp==s;
}

bool cmp( pair<string,int> a, pair<string,int> b){
	 if(a.first.size() == b.first.size()) return a.first > b.first;
    else return (a.first.size() > b.first.size());
}

int main(){
	string s;
	unordered_map<string,long long> m;
	vector<pair<string,long long> > v;
     while(cin >> s)
    {
        m[s]++;
    }

    for(auto it : m) if(Check(it.first)) v.push_back(it); 
    sort((v).begin(), (v).end(),cmp);

    for(auto it : v) cout << it.first << " " << it.second << '\n';
    
    
	return 0;
}
