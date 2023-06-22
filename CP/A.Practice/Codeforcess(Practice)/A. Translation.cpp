#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    {
        YES;
    }
    else{
        NO;
    }

    return 0;
}