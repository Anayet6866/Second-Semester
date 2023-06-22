#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int i, n, c = 0, d = 0,e=0;
    cin >> n;
    string s[n + 1], p, q;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        q = s[0];
        if (n == 1)
        {
            cout << s[i] << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[0] != s[i])
        {
            c++;
            e = i;
            // p=s[i+1];
            // cout<<p<<endl;
        }
        else
        {

            d++;
        }
    }
   // cout<<e<<endl;
    if(c>d)
    {
        cout<<s[e]<<endl;
    }
    else if(d>c)
    {
        cout<<s[0]<<endl;
    }
    
    return 0;
}