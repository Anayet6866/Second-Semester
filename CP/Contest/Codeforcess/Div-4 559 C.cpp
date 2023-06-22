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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c = 0, p;
        string s;
        cin >> p;
        if (p == 1)
        {
            YES;
        }
        else
        {
            cin >> s;
            for (int i = 0; i < p; i++)
            {
                for (int j = i + 1; j < p; j++)
                {
                    if (s[i] != s[j])
                    {
                        c++;
                        if(c==p)
                        {
                            goto lavel;
                        }
                    }
                    else
                    {
                        goto lavel;
                    }
                }
            }
        lavel:
            if (c % 2 == 0)
            {
                NO;
            }
            else
            {
                YES;
            }
             cout << c << endl;
        }
    }

    return 0;
}