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
    llI n;
    cin >> n;
    if (n == 0)
    {
        cout << "1" << endl;
    }
    else if (n % 4 == 0)
        cout << "6" << endl;
    else if (n % 4 == 1)
        cout << "8" << endl;
    else if (n % 4 == 2)
        cout << "4" << endl;
    else if (n % 4 == 3)
        cout << "2" << endl;
    return 0;
}
