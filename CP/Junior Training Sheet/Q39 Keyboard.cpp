#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a = {"qwertyuiopasdfghjkl;zxcvbnm,./"};
    char L;
    cin >> L;
    cin >> s;
    if (L == 'R')
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {

                if (s[i] == a[j])
                {
                    s[i] = a[j - 1];
                }
            }
        }
        cout << s << endl;
    }
    else if (L == 'L')
    {
        for (int k = 0; k < s.size(); k++)
        {
            for (int l = 0; l < a.size(); l++)
            {
                if (s[k] == a[l])
                {
                    // cout<<l<<endl;
                    s[k] = a[l + 1];
                    break;
                    // cout<<k<<endl;
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}