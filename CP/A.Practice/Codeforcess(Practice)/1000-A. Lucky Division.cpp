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
    int n;cin>>n;
    if(n%4==0 || n%7==0|| n%44==0 || n%47==0||n%74==0||n%77==0||n%444==0
    ||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%777==0)
    {
        YES;
    }
    else
    {
        NO;
    }

    return 0;
}