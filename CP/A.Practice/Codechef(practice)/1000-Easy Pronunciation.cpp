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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0,d=0;
        for (int i = 0; i < n; i++)
        {
           if((s[i]=='a') || (s[i]=='e') ||(s[i]=='i') || s[i]=='o' || (s[i]=='u') )
           {
             c=0;
           }
           else
           {
        
            c++;
            if(c==4)
            {
                break;
            }
           }
        }
        if (c >= 4)
        {
            NO;
        }
        else
        {
            YES;
        }
      cout << c << endl;
    }

    return 0;
}