#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x = 0,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == '+')
        {
            x++;
        }
        if (s[0] == '-')
        {
            x--;
        }
        if (s[2] == '+')
        {
            x++;
        }
        if (s[2] == '-')
        {
            x--;
        }
    }
    cout << x <<endl;
    return 0;
}