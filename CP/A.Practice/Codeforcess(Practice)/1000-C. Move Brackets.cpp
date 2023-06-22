#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n, ans = 0, front = 0, back;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                front++;
            }
            else
            {
                front--;
                if (front < 0)
                {
                    front = 0;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}