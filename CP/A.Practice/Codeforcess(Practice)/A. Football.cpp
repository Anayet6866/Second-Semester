#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int p = 0,c=0,d=0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')
        {
            c++;
            d=0;
        }
        else
        {
            d++;
            c=0;
        }
        if (c >= 7 || d>=7)
        {
            p = 1;
        }
    }
        if (p == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return 0;
    }