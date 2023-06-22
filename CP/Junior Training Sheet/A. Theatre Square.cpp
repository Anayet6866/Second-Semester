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
    llI n, m, a, p = 0, q = 0;
    cin >> n >> m >> a;
    // if (n == 1 && m == 1 && a == 1)
    // {
    //     cout << n << endl;
    //     goto lavel;
    // }
    // else if (n % a != 0)
    // {
    //     p = (n / a) + 1;
    // }
    // else
    // {
    //     p = n / a;
    // }
    // if (m % a != 0)
    // {
    //     q = (m / a) + 1;
    // }
    // else
    // {
    //     q = m / a;
    // }
    // cout << p + q << endl;
    // lavel:
    // p=ceil(m/a);
    // q=ceil(n/a);
    p=(m+a-1)/a;
    q=(n+a-1)/a;
    cout<<p*q<<endl;
    return 0;
}