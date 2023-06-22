#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;   //t=3 5 7 20 
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int f = 0;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    f = 1;
                }
            }
            if (f == 1)
            {
                cout << "NO" << endl;
            }
            else if (f == 0)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}