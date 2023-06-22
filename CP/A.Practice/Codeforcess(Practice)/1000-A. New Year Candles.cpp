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
    int a, b, p = 0,d=0;
    cin >> a >> b;
    int ans=a;
    //ans += a+(a/b) ;
    
    while (a >= b)
    {
        d=a/b;
        ans += d;
        p=a%b;
        a=d+p;

       // q=q/b;
    }
    cout << ans << endl;
 
    return 0;
}