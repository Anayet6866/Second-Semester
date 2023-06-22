#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        bool f = false;
        if (s.size() % 2 == 0)
        {
            for (int i = 1; i < n; i+=2)
            {
        
                    if ((s[i] - '0') % 2 == 0)
                    {
                        f = false;
                    }
            
            }
        }
        else
        {
            for (int i = 0; i < n; i+=2)
            {
               
                    if ((s[i] - '0') % 2 == 1)
                    {
                        f = true;
                    }
            
            }
        }
    if (!f)
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}
return 0;
}