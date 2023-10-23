#include<bits/stdc++.h>
using namespace std;

string SinhMax(int m, int s)
{
    string res = "";
    while(m--)
    {
        if(s <= 9) 
        {
            res += (s + '0');
            s = 0;
        }
        else 
        {
            res += '9';
            s-= 9;
        }
    }

    if(s > 0) return "-1";

    return res;
}

string SinhMin(int m, int s)
{
    string res = "";
    while(m--)
    {
        if(s <= 9) 
        {
            if(s > 1) 
            {
                if(m >= 1) 
                {
                    res += (s - 1 + '0');
                    s = 1;            
                }
                else 
                {
                    res += (s + '0');
                    s = 0;                  
                }
            }
            else
            {
                if(m == 0) 
                {
                    res += '1';
                    s = 0;                 
                }
                else 
                {
                    res += '0';                 
                }
            }
        }
        else 
        {
            res += '9';
            s-= 9;
        }
    }

    if(s > 0) return "-1";
    
    reverse(res.begin(),res.end());
    return res;
}

int main()
{   
    int m,s;
    cin >> m >> s;

    if(s == 0) return cout << "-1 -1",0;
    
    cout << SinhMin(m,s) << " " << SinhMax(m,s);
    
	return 0;
}
