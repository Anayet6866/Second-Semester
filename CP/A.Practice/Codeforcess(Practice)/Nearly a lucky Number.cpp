#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define end cout << endl
using namespace std;
int main()
{

        string s;
        int c = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                c++;
            }
        }
        if (c == 4 || c == 7)
            YES;
        else
            NO;

    return 0;
}